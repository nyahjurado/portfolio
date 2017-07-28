
from random import *


#Create the list of words you want to choose from.
five_syl = ["An old silent pond...", "splash! Silence again.", "into the chestnut.", "A lovely sunset", "The caterpillar", "Climb big Mt. Fuji.", "Everything I touch.", "Pickles like long vines.", "Softly loving me", "A mountain village"]
seven_syl = ["A frog jumps into the pond", "a worm digs silently", "these brilliant-hued birds", "Trusting the Buddha, cool dude", "under the piled-up snow", "although my horse is lovely", "swaying in the evening sun"]

haiku = ""

#Generates a random integer.
x = randint(0, len(five_syl)-1)
y = randint(0, len(seven_syl)-1)

haiku += five_syl[x] + " " + seven_syl[y] + " " + five_syl[x] + " "

print(haiku)
