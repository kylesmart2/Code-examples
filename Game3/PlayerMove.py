##moving player
from PlayerGenerator import *
from BoardGenerator import *
from Menu import* ##just playing around

def clear():
    if (os.name == 'nt'):    
        c = os.system('cls')
    else:
        c = os.system('clear')
    del c  # can also omit c totally

def playerMove(player,board):

    print("Enter a direction 'W','A','S','D' or Q to Quit")
    userInput = input("Or 'M' to enter the menu: ")
    
    board[player['row']][player['col']]="."

    if userInput.upper() == "W" and player['row']>0:
        player['row'] -= 1
    elif userInput.upper() == "S" and player['row']<len(board[0])-1:
        player['row'] +=1
    elif userInput.upper() == "D" and player['col']<len(board[0])-1:
        player['col'] += 1
    elif userInput.upper() == "A" and player['col']>0:
        player['col'] -= 1
    elif userInput.upper() == "Q":
        player['gameOver'] = True
    elif userInput.upper() == "M": ##just playing around
        clear()
        playerMenu(player)
            
        #having an issue with it working properly
        
        
    board[player['row']][player['col']]="@"
    clear()
    
    


##while True:
##    player = playerGen(4)
##    playerDisplay(player)
##
##    userInput = input("\n" "Do you like this character (Y/N)?")
##    if userInput.upper() =="Y":
##        board = createBoard()
##        board,player['row'],player['col'] = placePlayer(board)
##        break
##        
##
##    if userInput.upper() =="N":
##        break
##while True:
##    playerMove(player,board)
##    clear()
##    showBoard(board)





    
