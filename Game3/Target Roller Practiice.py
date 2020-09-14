import random

def targetRoller(times, sides, target):
    ##roll this many dice with this many sides
    ##for each, if Die >= target
        ##add 1 to a counter

    ##return counter
    total= 0
    for i in range(times):
        die = random.randint(1,sides)
        if die >= target:
            total += 1
    ##print statement to test whether it's working
##    print("Die"+str(i+1)+": " +str(die)) 

    return total 
