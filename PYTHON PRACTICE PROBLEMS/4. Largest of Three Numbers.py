#Write a Python program that takes three numbers as input and prints the largest one.
print('\nFind the greatest value from the given 3 numbers!')
num1, num2, num3 = str(input("Type the values such as 2,4,5:    ")).replace(',', ' ').split()

num1 = int(num1)
num3 = int(num3)
num2 = int(num2)

print(end="The greatest value is: ")
if num2 > num3 and num2 > num1:
    print(num2)

if num3 > num2 and num3 > num1:
    print(num3)

if num1 > num2 and num1 > num3:
    print(num1)