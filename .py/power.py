def power(a,b):
    if b==0:
        return 1
    else:
        return a*power(a,b-1)
a=int(input())
b=int(input())
print(power(a,b))
