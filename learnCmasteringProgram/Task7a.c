/*
* Write a function to find the maximum and minimum element in an array.
https://onlinegdb.com/JANVGObE8l
*/

#include <stdio.h>

void arr_cmp(int x[], int size) {
    int max = x[0];
    for(int i = 1; i < size; i++) {
        if (x[i] > max) max = x[i];
    }

    int min = x[0];
    for(int i = 1; i < size; i++) {
        if (x[i] < min) min = x[i];
    }

    printf("Maximal element in array: %d\n", max);
    printf("Minimal element in array: %d\n", min);
}

int main () {
    int arr[] = {1,40,5,9,3,5,-9,2,1,80};    
    int size = sizeof(arr) / sizeof(*arr); 
    
    printf("Sizeof(arr): %lu\t", sizeof(arr)); 
    printf("Sizeof(*arr): %lu\t", sizeof(*arr)); 
    printf("Elements: %d\n", size);

    arr_cmp(arr, size);
}