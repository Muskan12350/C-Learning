factorial = 1
i = 1
number = int(input('Enter number: '))
while i<=number:
    factorial *= i
    i += 1
print(f'Factorial of {number} is {factorial}')
