##TreasureGenerator##
import random
from BoardGenerator import*
from PlayerGenerator import*
from PlayerMove import*

def generateTreasure(board):
    adj = ["Huge", "Bare", "Childlike", "Tiny", "Gold", "Blonde", "Small",
                  "Shiny", "Beast", "Frail", "Bitter", "Old", "Smelly", "Tasty"]
    obj = [" Baseball", " Orange", " Car", " Lady", " Dog", " Cat", " Biscuit",
               " Baby", " Bear", " Cart", " Teenager", " Torrey", " Todd", " Gun"]

    treasureString = adj[random.randint(0, len(adj)-1)]  ##picks random work from adj dic.
    treasureString += obj[random.randint(0, len(obj)-1)] ##picks random words from obj dic. adds to adj


    ##placeTreasure
    treasure = {}
    treasure['row'] = random.randint(0, len(board)-1)
    treasure['col'] = random.randint(0, len(board[0])-1)
    treasure['Name'] = treasureString
    return treasure


    
def checkTreasure(player,treasure):
    if player['row'] == treasure['row'] and player['col'] == treasure['col']:
        return True

##while True:   ##test before adding to main, comment out after successful test
##    
##    print(generateTreasure())
##    input()

##Minor treasure list just for haha's

def minorTreasure(player):
    total = dieRoller(1,6)
    if total == 3:
        print("You just received 10 Health!")
        player['Health'] += 10
    elif total == 1:
        print("You just received 5 Attack!")
        player['Attack'] += 5
    elif total == 2:
        print("You just received 5 Defense!")
        player['Defense'] += 5
    elif total == 4:
        print("You just found a ") #insert minor treasure here
    elif total == 5:
        print("You just found a ") #insert minor treasure here
    elif total == 6:
        print("You just found a ") #insert minor treasure here

    
    
