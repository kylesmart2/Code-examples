##PlayerCombat##
import math
import random
from PlayerGenerator import*
from BoardGenerator import*
from PlayerMove import*
from TreasureGenerator import*

def clear():
    if (os.name == 'nt'):    
        c = os.system('cls')
    else:
        c = os.system('clear')
    del c  # can also omit c totally

def checkHealth(player,enemy):
    if player['Health'] <= 0:
        
        player['gameOver'] = True
        
        return True
        
    elif enemy['Health'] <=0:
        print("You won!")
        return False
        

def Combat(player,enemy):

    while player['Health'] > 0 and enemy['Health'] > 0:

        playerAttack = random.randint(1,player['Attack'])
        playerDefense = random.randint(1,player['Defense'])
        
        enemyAttack = random.randint(1, enemy['Attack'])
        enemyDefense = random.randint(1, enemy['Defense'])
        
        playerDamage = playerAttack - enemyDefense
        
        if playerDamage <= -10: ##Player botch job
            player['Health'] += int(playerDamage * .5)
            print("You botched it!","\n", "Player ", player['Health'], "\n", "Enemy  ", enemy['Health'])
            input("Press Enter to continue...")
        elif playerDamage <= 0: ##Player missed
            print("You missed!","\n", "Player ", player['Health'], "\n", "Enemy  ", enemy['Health'])
            input("Press Enter to continue...")
        elif playerDamage < 10: ##Player hit change back to < 10 after test
            enemy['Health'] -= playerDamage
            print("You hit the enemy!", "\n","Player ", player['Health'], "\n", "Enemy  ", enemy['Health'])
            input("Press Enter to continue...")
        elif playerDamage >= 10: ##Player critical hit
            enemy['Health'] -= int(playerDamage * 1.5)
            print("You delivered a critical hit!", "\n","Player ", player['Health'], "\n", "Enemy  ", enemy['Health'])
            input("Press Enter to continue...")
        if enemy['Health'] <= 0:
            break

        enemyDamage = enemyAttack - playerDefense
    

        if enemyDamage <= -10:  ##Enemy botch job
            enemy['Health'] += int(enemyDamage * .5)
            print("The enemy botched it!","\n", "Player ", player['Health'], "\n", "Enemy  ", enemy['Health'])
            input("Press Enter to continue...")        
        elif enemyDamage <= 0: ##Enemy missed
            print("Enemy missed you!","\n", "Player ", player['Health'], "\n", "Enemy  ", enemy['Health'])
            input("Press Enter to continue...")
        elif enemyDamage < 10: ##Enemy hit change back to < 10 after test
            player['Health'] -= enemyDamage
            print("You were hit!" ,"\n", "Player ", player['Health'], "\n", "Enemy  ", enemy['Health'])
            input("Press Enter to continue...")
        elif enemyDamage >= 10: ##Enemy critical hit
            player['Health'] -= int(enemyDamage*1.5)
            print("You received a critical hit!","\n", "Player ", player['Health'], "\n", "Enemy  ", enemy['Health'])
            input("Press Enter to continue...")

        if player['Health'] <= 0:
            break
        
    
    
##while True:
##    player = playerGen(4)
##    board = createBoard() #calls from PlayerGenerator to create board
##    board,player['row'],player['col'] = placePlayer(board)
##    break
##while True:
##    treasure = generateTreasure(board)
##    playerMove(player,board)
##    if checkTreasure(player, treasure) == True:
##        print("You found a treaure! ", treasure['Name'])
##        generateTreasure(board)
##    total = dieRoller(1,6)
##    if total == 1:
##        print("You found a minor treasure!")
##    elif total == 6:
##        print("You are under attack!")
##        enemy = playerGen(4)
##        Combat(player, enemy)
##        if player['Health'] <= 0: ##Player loses
##            player['gameOver']== True
##        elif enemy['Health'] <= 0: ##Player wins
##            print("You won!")
##            break
##
##    
##        
##    clear()
##    
##    
##    showBoard(board)
##    if player['gameOver'] == True:
##        print("We had an excellent run, unfortunately, it is now time to go.")
##        break

