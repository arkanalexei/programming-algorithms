import random
pn=0
g=0
r=random.randint(1,100)
def first_turn(n):
  if n>100:
    print("OUT OF BOUNDS")
  elif abs(r-n)<=10:
    print('WARM!')
  else:
    print('COLD!')
def sub_turn(pn,n):
  if abs(n-r)>abs(pn-r):
    print('COLDER!')
  elif n!=r:
    print('WARMER!')
n=int(input('Enter a number from 1 to 100  '))
first_turn(n)
pn=n
while r!=n:
  pn=n
  n=int(input('Enter a number  '))
  sub_turn(pn,n)
  g+=1
else:
  print('Congratulations you took {} guesses'.format(g))
