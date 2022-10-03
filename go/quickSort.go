package main

import "fmt"

func partition(A []int, low, high int) int {
	pivot := A[high]
	i := low - 1

	for j := low; j <= high-1; j++ {
		if A[j] < pivot {
			i++
			A[i], A[j] = A[j], A[i]
		}
	}

	A[i+1], A[high] = A[high], A[i+1]

	return i + 1
}

func quickSort(A []int, low, high int) {
	if low < high {
		p := partition(A, low, high)

		quickSort(A, low, p-1)
		quickSort(A, p+1, high)
	}
}

func main() {
	arr := []int{
		147, 485, 735, 606, 280,
		243, 810, 282, 940, 314,
		237, 576, 498, 876, 555,
		656, 573, 513, 937, 289,
		2, 678, 653, 833, 333,
	}

	fmt.Printf("Unsorted: %v\n", arr)

	quickSort(arr, 0, len(arr)-1)

	fmt.Printf("Sorted:   %v\n", arr)
}
