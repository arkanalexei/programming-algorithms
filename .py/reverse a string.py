def reverse(str):
    if len(str)==1:
        return str[0]
    else:
        return str[-1]+reverse(str[:-1])
st=input()
print(reverse(st))
    
