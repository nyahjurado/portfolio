
from random import *


#Create the list of words you want to choose from.
name_list = ["Dante", "Abner", "Primrose", "Bliss", "Alaska", "Adore", "Gretel", "Jubilee", "Nimrat", "Paizlee", "Moon", "Zvra", "Strawberry", "Coyote", "Hansel", "Indigo", "Igor", "Nestor", "Rocket"]


x = randint(0, len(name_list)-1)
name_1 = name_list[x]

print(name_list[x])
