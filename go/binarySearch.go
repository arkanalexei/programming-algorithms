package main

import (
	"fmt"
)

func binarySearch(A []int, t int) int {
	low := 0
	high := len(A) - 1
	mid := 0

	for high-low > 1 {
		mid = (high + low) / 2
		if A[mid] < t {
			low = mid + 1
		} else {
			high = mid
		}
	}

	if A[low] == t {
		return low
	}

	if A[high] == t {
		return high
	}

	return -1
}

func main() {
	arr := []int{
		5, 14, 14, 22, 26,
		28, 31, 31, 34, 40,
		50, 60, 70, 72, 73,
		76, 93, 94, 99, 100,
	}

	if index := binarySearch(arr, 72); index != -1 {
		fmt.Printf("Found At Index %d\n", index)
	} else {
		fmt.Println("Not Found")
	}
}
