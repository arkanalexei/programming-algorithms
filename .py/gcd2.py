def gcd(a,b):
  assert a>0 and b>0 and int(a)==a and int(b)==b
  if b==0:
    return a
  else:
   return gcd(b,a%b)
print(gcd(3,6))
