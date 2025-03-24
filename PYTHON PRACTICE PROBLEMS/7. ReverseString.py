#Write a program that takes a string as input and prints it in reverse.


while True:
    # Take input from the user
    input_string = input("Enter a string: ")

    # Reverse the string and print =>> input_string[start:end:step]
    reversed_string = input_string[::-1]
    print("Reversed string:", reversed_string)