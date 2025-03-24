#Write a Python program that checks whether a given number is odd or even.

def oddEven(GivenNum):
    if GivenNum % 2 == 0:
        print(f"{GivenNum} is an even number.")
    
    else:
        print(f"{GivenNum} is an odd number.")
     

while True:
    try:
        userVal = int(input('Type the value:    '))
        oddEven(userVal)
    except Exception:
        print(f'Error:  {Exception}')



