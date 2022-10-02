def string_base(num,base):
  if num<base:
    return 
  else:
    string_base(int(num/base),base)
    print(num%base,end='')
n,b=input().split()
print('1',end='')
string_base(int(n),int(b))
