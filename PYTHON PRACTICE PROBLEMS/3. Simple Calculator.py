#Write a Python program that asks the user for two numbers and an operator (+, -, *, /) and performs the calculation.

def calculator(digi1, digi2, operator):
    if operator == "+":
        print(f"Addition of {digi1} and {digi2}: ", int(digi1+digi2))
    if operator == "-":
        print(f"substraction of {digi1} and {digi2}: ", int(digi2-digi1))
    
    if operator == "*":
            print(f"Multiplication of {digi1} and {digi2}: ", int(digi2*digi1))

    if operator == "/":
        print(f"Division of {digi1} and {digi2}: ", int(digi2/digi1))



while True:
    print("\nPython Calculator!")
    val1, op, val2 = str(input("Type the equation (val1 gap + gap val2): ")).split()
    val2 = int(val2)
    val1 = int(val1)

    calculator(val1, val2, op)
    print('\n')