'''
QUICK CODE NOTE:
		YOU WILL NEED THE FOLLOWING BUILT-IN FUNCTIONS:
			1. ord(): returns the ASCII value of a character
			2. chr(): takes in an ASCII value and returns the character
			3. isalpha(): detects if input is a character in the alphabet
			4. find(): """
'''

def encode(plaintext, shift_num):
	for i in plaintext:
		if i.isalpha():
			stayInAlphabet = (ord(i) + shift_num)
			cipherText = ""

	print("Your ciphertext is: ")
	print(cipherText)

#Brute force method; checks against every possible shift (does not have access to a key)
def decode(ciphertext):
	print(blah)


user_input = str(input("Would you like to encode or decode a message? \n"))
plaintext = ""
shift_num = 0

if (user_input == "encode"):
	plaintext = input("What is your message? \n")
	shift_num = int(input("What would you like to shift the message by? \n"))
	encode(plaintext, shift_num)
elif (user_input == "decode"):
	ciphertext = input("What is your ciphertext?")
	decode(ciphertext)
else:
	print("Please input 'encode' or 'decode'")
