str=input('Enter a string ')
c=input('Enter the char to be found  ')
def length(s):
  count=0
  for i in s:
    count+=1
  print(count)
def indexof(str,c):
  for i in range(len(str)):
    if str[i]==c:
      print(i)
      break
length(str)
indexof(str,c)
