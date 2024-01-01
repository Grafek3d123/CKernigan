/*
Implement a program to extract and print individual bytes from an unsigned int using the following union:
union tagname {
    unsigned int a;
    unsigned char s[4];
};
*/

#include <stdio.h>

int main() {
    union tagname{
        unsigned int a;
        unsigned char s[4];
    };
    union tagname s;

    printf("Enter an unsigned integer: ");
    scanf("%u", &s.a);

    printf("Bytes of the integer: ");
    for (int i = 3; i >= 0; --i) {
        printf("%d ", s.s[i]);
    }
    printf("\n");

    return 0;
}