#Write a Python program that checks if a given string is a palindrome.
#what is a palindrome?
# A palindrome is a word phrase or sentence sounds same in both ascending and descending!

def find_palindrome(string):
    string = str(string)
    if string in string[::-1]:
        print(f'{string} is a palindrome!')
    else:
        print(f'{string} is not a palindrome!')

while True:
    userString = input('Palindrome Finder!- Type to identify! ==>   ')
    find_palindrome(userString)


