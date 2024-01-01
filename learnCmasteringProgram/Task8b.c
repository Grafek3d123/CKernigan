/*
Implement a function to compare the structure variables.
*/

#include <stdio.h>

struct test {
    char A;
    int  B;
    char C[5];   
};

int main () {
    struct test test1  = { 'A', 1234, "Hello"};
    struct test test2  = { 'B', 1234, "Bye"};

    printf("test1: {%c, %d, %s}\n", test1.A, test1.B, test1.C);
    printf("test2: {%c, %d, %s}\n", test2.A, test2.B, test2.C);

    printf("First members:  %s\n", (test1.A == test2.A) ? "equal": "not equal");
    printf("Second members: %s\n", (test1.B == test2.B) ? "equal": "not equal");
    printf("Third members:  %s\n", (test1.C == test2.C) ? "equal": "not equal");
}