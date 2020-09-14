import random 

def createBoard(): 
    tempList=[]
    board=[]
    ##Generating a random number from player to be used for list
    userInput = int(input("Enter a number of columns: "))
    userInput2 = int(input("Enter a number of rows: "))
    ##Genterating a random size list from userinput
    for i in range(userInput):
       tempList.append('.')
    for i in range(userInput2):
        board.append(list(tempList))

    return board


def showBoard(board):

    for i in range(len(board)):
        print(" ".join(board[i]))
    ##This is to make my board show very nice
    

def placePlayer(board):  

    row=random.randint(0,len(board)-1) ##works well with player generated numbers
    col=random.randint(0,len(board[0])-1)
    board[row][col] = "@"

    showBoard(board)
    
    return board, row,col


