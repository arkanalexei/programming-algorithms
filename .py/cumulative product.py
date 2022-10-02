def cumulative_product(numlist):
  pro=1
  l=[]
  for i in numlist:
    pro*=i
    l.append(pro)
  return l
li=[int(i) for i in input().split()]
print(cumulative_product(li))
