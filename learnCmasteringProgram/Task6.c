/*
* Write a function ‘ptr_cmp’ that takes 2 arguments as pointers to an integer,
* compares them and prints whether the arguments are equal or not.
* In the main function create an integer variable ‘n’ and
* the pointer to this variable ‘ptr_n’, call the ‘ptr_cmp’
* with the following arguments – ‘ptr_n’ and ‘&n’.
*/

#include <stdio.h>

void ptr_cmp(int* x, int* y) {
    if (x == y) printf("True\n");
    else printf("False\n");
}

int main () {
    int n;
    int* ptr_n = &n;

    ptr_cmp(ptr_n, &n);
}