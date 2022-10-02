def fact(num):
  n=int(num)
  f=1
  for j in range(1,n+1):
    f=f*j
  #print(f)
  return f
def strong(num): 
  st=0
  dig=len(num)
  for i in range(dig):
    a=int(num[i])
    st+=fact(a)
  if st==int(num):
    return 1
  else:
    return 0
num=input()
a=strong(num)
if a==1:
  print('Strong')
else:
  print('Not strong')
