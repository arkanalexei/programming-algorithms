import math
def sum_of_digits(n):
    if n==0:
        return 0
    else:
        return n%10+sum_of_digits(math.floor(n/10))
n=int(input())
print(sum_of_digits(n))
