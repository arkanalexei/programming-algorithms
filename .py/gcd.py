def gcd(n1,n2):
  while n1!=n2:
    if n1>n2:
      gcd(n1-n2,n2)
    else:
      gcd(n1,n2-n1)
  return n1
a=int(input('Enter a number '))
b=int(input('Enter a number '))
print(gcd(a,b))
