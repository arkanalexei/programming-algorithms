def upper_lower(string):  
  l=0
  u=0
  for ch in string:
    if ch.islower()==True:
      l+=1
    else:
      u+=1
  print("Lower case {}".format(l))       
  print("Upper case {}".format(u))
c=input()
upper_lower(c)
