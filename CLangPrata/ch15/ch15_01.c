//Convert from binary to decimal

#include <stdio.h>

int binToDec(char* x){
    int result = 0;

    for (int i = 0; i < 8; i++) 
        if (x[i] == '1')  
            result += 1 << 1 * (7 - i);
    return result;
}

int main () {
char* pbin = "00011001";

printf("%d\n", binToDec(pbin));
}