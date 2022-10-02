def sum_of_harmonic(n):
  if n==1:
    return 1
  else:
    return 1/n+sum_of_harmonic(n-1)
n=int(input())
print(sum_of_harmonic(n))
