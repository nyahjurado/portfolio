from turtle import *
import math

# Name your Turtle.
Moana= Turtle()

#color is the color of the shape
#number is the number of sides
#length is the length of sides
color = input('Enter color of shape: ')
number = input('Enter the number of sides: ')
#make number an integer
number1 = int(number)
length = input('Enter the length of the sides: ')
length1 = int(length)

#value of the angle of the shape
n = number1
number1 = number1 -2
number1 = number1*180
number1 = number1/n
number1 = 180-number1

#print the results of the math and the shape
print("Each exterior angle will be %d "%(number1))
print(" with %d sides"%(n))
# Set Up your screen and starting position.
Moana.penup()
setup(500,500)
Moana.setposition(0, 0)

### Write your code below:
#Draw desired shape with desired colour
Moana.pencolor(color)
Moana.pendown()
for x in range(0, 24):
    for x in range(0, n):
        Moana.forward(length1)
        Moana.right(number1)
    Moana.right(15)
Moana.penup()




# Close window on click.
exitonclick()
