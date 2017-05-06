import sys

def factorial(n):
    sum = 1
    for i in range(1,n+1):
        sum = sum * i
    return sum

for line in sys.stdin:
    for var in line.split():
        print(var+'!')
        print(factorial(int(var)))
        
