#Write a program that calculates the factorial of a given number using a loop.

def factorial(val):
    if val < 0:
        print(f'{val} is less them 0, factorial cannot be determined for neg. values!')
    
    FactVal = 1
    for factorial in range(1, val+1):
        FactVal *= factorial
    
    print(f'The factorial for {val} is {FactVal}')


factorial(5)
