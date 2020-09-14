#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
#define DIE 6

int roll_dice(void);
bool play_game(void); 

int main(void)
{
	char choice;
	int roll, win = 0, loss = 0;

	printf("Would you like to play craps? (y/n): " );
	scanf("%c", &choice);
	getchar();
	/***** Using getchar after so it doesn't mess up the loop ahead *****/

	if (choice == 'y')   /*** Just a little something extra ***/
	{
		printf("Good choice.\n");	
	}
	else
		printf("Poor choice!\n");
		

	while (choice == 'y')
	{
		if (play_game())  /*** if true ***/
		{
			win += 1;
			printf("Play again? (y/n): ");
			scanf("%c", &choice);
			getchar();
		}
		else /*** if false ***/
		{
			printf("Play again? (y/n): ");
			loss += 1;
			scanf("%c", &choice);
			getchar();   /*** using again to clear to new line ***/
		}

	}
	printf("Wins: %d 	Losses: %d\n", win, loss);
	return 0;
}
int roll_dice(void)
{
	int die1, die2, total = 1;
	srand((unsigned) time(NULL));

	die1 = rand() % DIE;
	die2 = rand() % DIE;
	total = die1 + die2;
	if (die1 == die2)
		printf("You rolled a hard %d\n", die1+die2);

	if (total == 0)   /*** kept getting zeroes, so I did this ***/
		die1 = rand() % DIE;
		total = die1 + die2;
	
	return total;
}

bool play_game(void)
{
	int roll, point, play = 0;	
	
	roll = roll_dice();
	if ((roll == 7) || (roll == 11))
	{
		printf("You rolled: %d\n", roll);
		printf("Winner Winner Chiken Dinner!\n");
		return true;
	}
	else if ((roll == 2) || (roll == 3) || (roll == 12))
	{	
		printf("You rolled: %d\n", roll);
		printf("Craps!\n");
		return false;
	}
	else
		printf("You rolled: %d\n", roll);
		printf("The point is: %d", roll);
		point = roll;

	while ((play != point) || (play != 7))
	{	
		getchar();   /*** I like to hit enter between rolls   *
					  *   to give that feeling that you're    *
					  *   actually playing the game         ***/
		play = roll_dice();
		printf("You rolled: %d", play);
		if (play == point)
		{
			printf("\nWinner Winner Chicken Dinner!\n");
			printf("Pucks off. Same good shooter!\n");
			return true;
		}
		else if (play == 7)
		{
			printf("\nSeven out!\n");
			printf("Pucks off, new shooter\n");
			return false;
		}
		else if (play == 2)
		{
			printf("\nDon'ts win, Comes out, Spit two in the Field");
		}
		else if (play == 3)
		{
			printf("\nDon'ts win, Comes out, Good in the Field");
		}
		else if (play == 4)
		{
			printf("\nDont's behind, Comes to 4, Good in the Field");
		}
		else if (play == 5)
		{
			printf("\nDont's behind, Comes to 5, Take the Field");
		}
		else if (play == 6)
		{
			printf("\nDon't's behind, Comes to 6, Take the Field");
		}
		else if (play == 8)
		{
			printf("\nDon'ts behind, Comes to 8, Take the Field");
		}
		else if (play == 9)
		{
			printf("\nDon'ts behind, Comes to 9, Good in the Field");
		}
		else if (play == 10)
		{
			printf("\nDon'ts behind, Comes to 10, Good in the Field");
		}
		else if (play == 11)
		{
			printf("\nTake the Don'ts, Good Come, Good in the Field");
		}
		else if (play == 12)
		{
			printf("Don'ts win, Comes out, Spit two in the Field");
		}
	}
	return 0;	/*** Had to do this to prevent compiler warning   *
				 *   that function could make it past end }     ***/

}