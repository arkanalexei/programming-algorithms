function SelectionSort(input) {  
    for (var i = 0; i < input.length; i++) {  
        var temp = input[i];  
        for (var j = i + 1; j < input.length; j++) {  
            if (temp > input[j]) {  
                temp = input[j];  
            }  
        }  
        var index = input.indexOf(temp);  
        var tempVal = input[i];  
        input[i] = temp;  
        input[index] = tempVal;  
    }  
}  

var A=[10,45,3,6,19,-1,55,0];
console.log("Array before sorting is:",A);
SelectionSort(A);
console.log("Array after sorting using Selection Sort is:",A);