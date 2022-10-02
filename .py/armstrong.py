def armstrong():
  arm=0
  for i in range(dig):
    a=int(num[i])
    arm+= (a**dig)
    i+=1
  if arm==int(num):
    return 1
  else:
    return 0
num=input("Enter number ")
dig=len(num)
a=armstrong()
if a==1:
  print('Armstrong')
else:
  print('Not Armstrong')
