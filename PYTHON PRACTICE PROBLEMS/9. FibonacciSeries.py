#Write a Python program to generate the first n numbers of the Fibonacci series.
#  0, 1, 1, 2, 3, 5, 8, 13, 21, 34,
# Explanation:
# Base Case: The Fibonacci series starts with [0, 1].
# Looping: Using a loop, the next number is generated as the sum of the last two numbers in the list.
# Slicing: If n is less than 2, it ensures the correct number of terms are returned



def fibonacci(n):
    fib_series = [0, 1]  # First two Fibonacci numbers
    for _ in range(n - 2):
        fib_series.append(fib_series[-1] + fib_series[-2])  # Sum of last two numbers
    return fib_series[:n]  # Return only the first n numbers


while True:
    # Take input from the user
    n = int(input("Enter the number of Fibonacci terms: "))

    # Print the Fibonacci series
    print("Fibonacci Series:", fibonacci(n))



