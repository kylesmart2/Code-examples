import random
import os

def nameGen():    
    prefix = ["Ky", "Tor", "To", "Ash", "Jas", "Dan", "Chr", "Ad", "Bri", "Cal"]    
    suffix = ["le", "rey", "dd", "ley", "on", "iel", "is", "am", "an", "eb"]

    nameString = prefix[random.randint(0, len(prefix)-1)]
    nameString += suffix[random.randint(0, len(suffix)-1)]
    return nameString


def placeGen():    ##Place generator to determine birthplace
    places = ["Germany", "Kentucky", "Minnesota", "California", "India", "Sweden", "Transylvania"]

    placeString = places[random.randint(0, len(places)-1)]
    return placeString


def fieldGen():    ##Field generator to determine person's field of work
    field = ["Taxidermy", "Rat racing", "Computer Technician", "Engineering", "Snake breeding", \
         "Splunking", "Welding", "Ostrich racing"]

    fieldString = field[random.randint(0, len(field)-1)]
    return fieldString


def yearsGen():  ##Generates years of experience for person in both field's
    years = ["3", "15", "7.5", "1.25", "29", "48", "13", "25", "10", "8"]

    yearsString = years[random.randint(0, len(years)-1)]
    return yearsString


def activityGen():     ##Person's new area of expertise
    activity = ["Spinning cotton", "Drag Racing", "Horse Racing", "Farming", "Snake charming", \
            "Hopscotch", "Sky diving", "Prostitution"]

    activityString = activity[random.randint(0, len(activity)-1)]
    return activityString


def areanaGen():   ##Area where person performs their new expertise
    areana = ["Horse Track", "Walmart parking lot", "Mojahve desert", "Pacific ocean",\
          "Empire State Building", "barn floor", "Dr.'s office lobby floor", "Mexican Border"]

    areanaString = areana[random.randint(0, len(areana)-1)]
    return areanaString


def dieRoller(n, s):
    total = 0
    for i in range(n):
        rnd= random.randint(1,s)
        total = total + rnd  #total += rnd
    return total


def playerGen(modifier):
    player = {}
    player['Name'] = nameGen()
    player['History'] = histGen(player)
    player['Attack'] = dieRoller(3,6) + dieRoller(modifier,4)
    player['Defense'] = dieRoller(3,6) + dieRoller(modifier,4)
    player['Health'] = dieRoller(5,6) + dieRoller(modifier,4)
    player['row'] = 0  ##to be modified with player input possibly 
    player['col'] = 0  ##to be modified with player input possibly
    player['gameOver'] = False    
    return player


def histGen(player):
    name = player['Name'] ##to call function from above
    place = placeGen()
    field = fieldGen()
    years = yearsGen()
    activity = activityGen()
    areana = areanaGen()

    history = name+ " was born in " + (place)+ " and has been working in " + field+\
             " for "+ years + " years. "+ name + " is a new comer to the world of "+\
             activity + " and will dominate on the "+ areana + "." "\n"

    return history


def playerDisplay(player):
    print("Your character's name is: ", player['Name'],"\n")
    print(player['History'])
    print("Attack", player['Attack'])
    print("Defense", player['Defense'])
    print("Health", player['Health'])

