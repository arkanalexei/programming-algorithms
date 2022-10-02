def max(a,b,c):
 if a>b and a>c:
  print('largest=',a)
 elif b>a and b>c:
  print('largest=',b)
 else :
  print('largest=',c)
n1=int(input("enter the first numeber"))
n2=int(input("enter the second number"))
n3=int(input("enter the third number"))
max(n1,n2,n3)
