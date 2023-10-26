/*  FUNCS AND MACRO
* Write a program with one function “print_big” 
* which receives one argument (an integer) and
* prints the line “x is big” (where x is the argument)
* if the argument given to the function is a number
* bigger than 10. Place the body of “print_big” function 
* under the “main” one. Use the macros
* to define whether ‘x’ argument is bigger than 10.
*/

#include <stdio.h>
//#define SWITCH
#ISNUMBIGGER10 ((x) > 10) ? 1 : 0

void print_big(int num);

int main () {
    int num = 7;
    print_big(num);
}

void print_big(int num) {
    if (num > 10) printf("%d is big\n", num);
    return;
}
