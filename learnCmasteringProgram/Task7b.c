/*
         char array_1[] = "Hello world";
         char array_2[11] = "Hello world";
         what values will sizeof(array_1) and sizeof(array_2) return and why?
*/

#include <stdio.h>

int main () {
    char array_1[] = "Hello world";
    char array_2[11] = "Hello world";
    int arr[10] = {1,40,5,9,3,5,-9,2,1,80};    
    int size = sizeof(arr) / sizeof(arr[0]); 

    printf("Sizeof(array_1): %lu\n", sizeof(array_1));
    printf("Sizeof(array_2): %lu\n", sizeof(array_2));
}