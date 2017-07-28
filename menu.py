
from random import *



appetizer = ["mozerella sticks", "chips and guac", "cheese", "crackers", "olives", "chicken noodle soup", "BABY carrots", "celery",]
entree = ["chicken", "steak", "salad", "salmon", "spaghetti", "fritatta", "meat loaf", "lobster", "cheeseburger", "veggieburger"]
desserts = ["ice cream", "chocolate cake", "sugar", "creme brulee", "cheesecake", "brownies", "apple pie","banana split", "pecan pie" ]

meal = ""

#Generates a random integer.
x = randint(0, len(appetizer)-1)
y = randint(0, len(entree)-1)
z = randint(0, len(desserts)-1)

meal += appetizer[x] + ", " + entree[y] + ", and " + desserts[z] + " "



print("Your meal tonight will include " + meal)
