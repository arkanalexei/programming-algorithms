def fact(n):
  f=1
  for i in range(1,n+1):
    f*=i
  return f
n=int(input("Enter n "))
r=int(input("Enter r "))
ncr=fact(n)/(fact(r)*fact(n-r))
print(ncr)
