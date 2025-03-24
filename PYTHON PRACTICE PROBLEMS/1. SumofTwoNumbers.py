#Write a Python program that takes two numbers as input and prints their sum.

print('\nwelcome to the beginner level problem solving: sum of two numbers')
num1, num2 = input('Type value1 + Value2:    ').replace('+', ' ').split()
num1= int(num1)
num2= int(num2)
print("Total:      ", num1+num2, '\n')