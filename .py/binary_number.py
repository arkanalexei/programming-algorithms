def binary(n):
    if n==0:
        return 0
    else:
        return n%2+10*binary(n//2)
num=int(input())
print(binary(num))
