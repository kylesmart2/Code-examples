from PlayerGenerator import*
from BoardGenerator import*
from TreasureGenerator import*

####just playing around, I wanted to check player stats in game play

def playerMenu(player):
    while True:
        userInput = input("Enter 'P' to see player info, 'T' for treasures, or 'Q' to go back to the game: ")
        if userInput.upper() == "P":
            print("Name: ",player['Name'])
            print("History: ",player['History'])
            print("Attack: ",player['Attack'])
            print("Defense: ",player['Defense'])
            print("Health: ",player['Health'])
            userInput2 = input("'Q' to go back to menu: ").upper()
            if userInput2 == "Q":
                  playerMenu(player)

        elif userInput.upper() == "T":
                  print("Your treasures will be here shortly")
                  userInput3 = input("'Q' to go back to menu: ").upper()
                  if userInput3 == "Q":
                      playerMenu(player)

        elif userInput.upper() == "Q":
            break
#####Don't know why I have to hit Q twice to quit the menu in the game#######
