package main

import "fmt"

func bubbleSort(A []int) {
	for i := 0; i < len(A); i++ {
		swapped := false

		for j := 0; j < len(A)-i-1; j++ {
			if A[j] > A[j+1] {
				A[j], A[j+1] = A[j+1], A[j]
				swapped = true
			}
		}

		if !swapped {
			break
		}
	}
}

func main() {
	arr := []int{
		12, 60, 36, 84, 23,
		26, 84, 8, 21, 18,
		18, 18, 33, 60, 50,
		91, 53, 49, 9, 80,
	}

	fmt.Printf("Unsorted: %v\n", arr)

	bubbleSort(arr)

	fmt.Printf("Sorted:   %v\n", arr)

}
