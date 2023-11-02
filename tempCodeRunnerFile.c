#include <stdio.h>

int main() {
    union {
        unsigned int num;
        unsigned char bytes[4];
    } converter;

    printf("Enter an unsigned integer: ");
    scanf("%u", &converter.num);

    printf("Bytes of the integer: ");
    for (int i = 3; i >= 0; --i) {
        printf("%02X ", converter.bytes[i]);
    }
    printf("\n");

    return 0;
}