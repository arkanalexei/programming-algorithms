def sum_of_list(l,n):
  if n==0:
    return l[n]
  else:
    return l[n]+sum_of_list(l,n-1)
lis=[int(i) for i in input().split()]
n=len(lis)-1
print(sum_of_list(lis,n))
