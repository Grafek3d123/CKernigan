/* Receives to strings with binary constants
*  from comand line and outputs result after 
*  appling ~ to every number, &, |, ^
*
*/

#include <stdio.h>
#include <stdlib.h>

unsigned int arg1, arg2;

int invrs(char* x, char* y) {
    while (*x != '\0') {
        *x++;
        printf("%s", x);
        printf("\n");
    }
    return 0;
}

int main(int argc, char* argv[]) {
    printf("recieved %d arguments: %s   and %s\n", argc-1, argv[1], argv[2]);
    
    arg1 = atoi(argv[1]), arg2 = atoi(argv[2]);
    printf("\t\targ1: %08d arg2: %08d\n", arg1, arg2);
    
    printf("%d\n", invrs(argv[1], argv[2]));
    return 0;
}