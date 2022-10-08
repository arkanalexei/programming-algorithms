function insertionSort(inputArr) {
    let n = inputArr.length;
        for (let i = 1; i < n; i++) {
            let current = inputArr[i];
            let j = i-1; 
            while ((j > -1) && (current < inputArr[j])) {
                inputArr[j+1] = inputArr[j];
                j--;
            }
            inputArr[j+1] = current;
        }
    return inputArr;
}

var A=[10,45,3,6,19,-1,55,0];
console.log("Array before sorting is:",A);
insertionSort(A);
console.log("Array after sorting using Insertion Sort is:",A);