/*
* Write a function to find the maximum and minimum element in an array.
*/

#include <stdio.h>

void arr_cmp(int x[], int size) {
    int max;
    for(int i = 0; i < size; i++) {
        if (x[i] > max) max = x[i];
    }
    printf("Max element in array: %d\n", max);
}

int main () {
    int arr[10] = {1,40,5,9,3,5,-9,2,1,80};    
    int size = sizeof(arr) / sizeof(arr[0]); 

    arr_cmp(arr, size);
}