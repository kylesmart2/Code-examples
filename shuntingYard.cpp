//******************************************************************||
//                      Kyle Smart      CS250                       ||
//      This program asks the user for an expression to see it's    ||
//      postifx form. The algorithm accepts both integers and       ||
//      variables in the form of letters.                           ||
//                              04//19/2018                         ||
//      (needed lots of help with the tokens and precedence)        ||


#include <functional>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <deque>
#include <stdio.h>
#include <math.h>
#include <ctype.h>

using namespace std;

class Token {
public:
    enum Type {
        Unknown = 0,
        Number,
        Operator,
        LeftParen,
        RightParen,
    };

    Token(Type t, const string& s, int prec = -1, bool ra = false)
        : type { t }, str ( s ), precedence { prec }, rightAssociative { ra }
    {}

    Type type { Type::Unknown };
    string str {};
    int precedence { -1 };
    bool rightAssociative { false };
};

ostream& operator<<(ostream& os, const Token& token) {
    os << token.str;
    return os;
}

deque<Token> exprToTokens(const string& expr) {
    deque<Token> tokens;
    
    for(const auto* p = expr.c_str(); *p; ++p)
     {
    	if((isdigit(*p)) || (isalpha(*p)))         //checking for digit or letter
        {
            const auto* b = p;
            for(; isdigit(*p) || isalpha(*p); ++p) {
                ;
            }
            const auto s = string(b, p);
            tokens.push_back(Token { Token::Type::Number, s });
            --p;
        }
         else                                       //if not digit or letter
         { 
            Token::Type t = Token::Type::Unknown;
            int pr = -1;            // precedence
            bool ra = false;        // rightAssociative
            switch(*p) {
            default:                                    break;
            case '(':   t = Token::Type::LeftParen;     break;
            case ')':   t = Token::Type::RightParen;    break;
            case '^':   t = Token::Type::Operator;      pr = 4; ra = true;  break;
            case '*':   t = Token::Type::Operator;      pr = 3; break;
            case '/':   t = Token::Type::Operator;      pr = 3; break;
            case '+':   t = Token::Type::Operator;      pr = 2; break;
            case '-':   t = Token::Type::Operator;      pr = 2; break;
            }
            tokens.push_back(Token {t, string(1, *p), pr, ra});
        }
    }

    return tokens;
}


deque<Token> shuntingYard(const deque<Token>& tokens) {
    deque<Token> queue;
    vector<Token> stack;

    for(auto token : tokens) {
        // Read a token
        switch(token.type) {
        case Token::Type::Number:
            // If the token is a number, then add it to the output queue
            queue.push_back(token);
            break;

        case Token::Type::Operator:
            {
                // If the token is operator, o1, then:
                const auto o1 = token;

                // while there is an operator token,
                while(!stack.empty()) {
                    // o2, at the top of stack, and
                    const auto o2 = stack.back();

                    // either o1 is left-associative and its precedence is
                    // *less than or equal* to that of o2,
                    // or o1 if right associative, and has precedence
                    // *less than* that of o2,
                    if(
                        (! o1.rightAssociative && o1.precedence <= o2.precedence)
                    ||  (  o1.rightAssociative && o1.precedence <  o2.precedence)
                    ) {
                        // then pop o2 off the stack,
                        stack.pop_back();
                        // onto the output queue;
                        queue.push_back(o2);

                        continue;
                    }

                    // @@ otherwise, exit.
                    break;
                }

                // push o1 onto the stack.
                stack.push_back(o1);
            }
            break;

        case Token::Type::LeftParen:
            // If token is left parenthesis, then push it onto the stack
            stack.push_back(token);
            break;

        case Token::Type::RightParen:
            // If token is right parenthesis:
            {
                bool match = false;
                while(! stack.empty()) {
                    // Until the token at the top of the stack
                    // is a left parenthesis,
                    const auto tos = stack.back();
                    if(tos.type != Token::Type::LeftParen) {
                        // pop operators off the stack
                        stack.pop_back();
                        // onto the output queue.
                        queue.push_back(tos);
                    }

                    // Pop the left parenthesis from the stack,
                    // but not onto the output queue.
                    stack.pop_back();
                    match = true;
                    break;
                }

                if(!match && stack.empty()) {
                    // If the stack runs out without finding a left parenthesis,
                    // then there are mismatched parentheses.
                    printf("RightParen error (%s)\n", token.str.c_str());
                    exit(0);
                }
            }
            break;

        default:
            printf("error (%s)\n", token.str.c_str());
            exit(0);
            break;
        }
    }

    // When there are no more tokens to read:
    //   While there are still operator tokens in the stack:
    while(! stack.empty()) {
        // If the operator token on the top of the stack is a parenthesis,
        // then there are mismatched parentheses.
        if(stack.back().type == Token::Type::LeftParen) {
            printf("Mismatched parentheses error\n");
            exit(0);
        }

        // Pop the operator onto the output queue.
        queue.push_back(move(stack.back()));
        stack.pop_back();
    }

    return queue;
}

void printque(deque<Token> queue)		//Function to print postfix expression
{
	int i, size;

	cout << "Here is your postfix expression: ";
	size = queue.size();
    for (i = 0; i < size; i++)
        cout << ' '  << queue[i];
    cout << endl;
}


int main ()
{
 	string expr;
    int choice;
 	
    cout <<"\tThis program asks for an expression and turns\n";
    cout << "\tthat expression into the postfix form using\n";
    cout << "\tDijkstra's Shunting Yard algorithm.\n";
    cout << "****    (accecpts +,-,*,/,(,),^ letters, and numbers)    ****\n\n";

    cout << "Please enter your expression: ";   //asking for user input
    cin >> expr;                                //retrieving user input


    while (true)
    {
        const auto tokens = exprToTokens(expr);     //converting expression into tokens
        auto queue = shuntingYard(tokens);          //calling shunting yard algorithm

        printque(queue);                            //printing expression

        cout << "\n\nWould you like to enter another expression? (1 = yes/ 0 = no):";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Please enter your expression: ";   //asking for user input
            cin >> expr;                                //retrieving user input
        }
        else
        {
            break;
        }

    }
    
    return 0;
}