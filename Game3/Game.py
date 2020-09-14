import random
import os
from PlayerGenerator import *
from BoardGenerator import*
from PlayerMove import*
from TreasureGenerator import*
from PlayerCombat import*

def clear():
    if (os.name == 'nt'):    
        c = os.system('cls')
    else:
        c = os.system('clear')
    del c  # can also omit c totally



def main(): 
    while True: ##Player generator, creating board, and placing player loop
        player = playerGen(4)
        playerDisplay(player)    
        userInput = input("\n" "Do you like this character (Y/N)? ")
        if userInput.upper() == "Y":
            clear() #clears screen prior to building board
            board = createBoard() #calls from PlayerGenerator to create board
            board,player['row'],player['col'] = placePlayer(board) ##calls from PlayerGenerator to show board
            
            break
           
        if userInput.upper() == "N":
            clear()
            
    while True: ##PlayerMove loop

        treasure = generateTreasure(board)##generating treasure and putting on board
        playerMove(player,board) #player move
        if player['gameOver'] == True: ##checking for player to input quit option
            print("Quitting is for quitters.")
            userInput = input("Would you like to play again? (Y/N)").upper()
            if userInput == "Y":
                main()
            elif userInput == "N":
                print("Goodbye")
                break
        if checkTreasure(player, treasure) == True: ##checking for treasure after move
            print("You found a treaure! ", treasure['Name'])
            generateTreasure(board) #generates and places a new treasure on the board
        
        total = dieRoller(1,6) ##dieRoller to determine minor treasure or enemy battle
        if total == 6:
            print("You found a minor treasure!")
            minorTreasure(player)
            
        elif total == 1:
            print("You are under attack!")
            enemy = playerGen(4) ##generating enemy
            Combat(player, enemy) ##calling for combat
            if checkHealth(player,enemy) == True: ##checking for life
                print("You died! :'(")
                userInput = input("Would you like to play again? (Y/N)").upper()
                if userInput == "Y":
                    main()
                elif userInput == "N":
                    print("Goodbye")
                    break
            
        
        
        
        showBoard(board) ##going back to board once player wins
        
main()  
    
