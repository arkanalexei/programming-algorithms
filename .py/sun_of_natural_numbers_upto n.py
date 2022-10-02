def sum_of_natural_nums(n):
  if n==0:
    return 0
  else:
    return n+sum_of_natural_nums(n-1)
n=int(input())
print(sum_of_natural_nums(n))
