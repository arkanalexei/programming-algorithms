def sum_of_geometric(n):
  if n==0:
    return 1
  else:
    return 1/pow(2,n)+sum_of_geometric(n-1)
n=int(input())
print(sum_of_geometric(n))
