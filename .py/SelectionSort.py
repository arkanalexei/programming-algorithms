import sys
A = [100, 25, 14, 121, 69]

for i in range(len(A)):
	
	idx = i
	for j in range(i+1, len(A)):
		if A[idx] > A[j]:
			idx = j
			
	A[i], A[idx] = A[idx], A[i]

print ("Sorted array")
for i in range(len(A)):
	print("%d" %A[i],end=" ")