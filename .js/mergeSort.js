/**
In computer science, merge sort (also commonly spelled as mergesort) is an efficient,
general-purpose, and comparison-based sorting algorithm.
Most implementations produce a stable sort, which means that the order of equal elements is the same in the input and output.
Merge sort is a divide-and-conquer algorithm that was invented by John von Neumann in 1945.
A detailed description and analysis of bottom-up merge sort appeared in a report by Goldstine and von Neumann as early as 1948.

Wikipedia : https://en.wikipedia.org/wiki/Merge_sort
*/

export function mergeSort(array) {
    const merge = function (left, right) {
        let result = [];
        while (left.length && right.length) {
            if (left[0] < right[0]) {
                result.push(left.shift());
            } else {
                result.push(right.shift());
            }
        }

        return [...result, ...left, ...right];
    };

    const center = array.length / 2;

    if (array.length == 1) return array;

    const left = array.splice(0, center);
    return merge(mergeSort(left), mergeSort(array));
}
