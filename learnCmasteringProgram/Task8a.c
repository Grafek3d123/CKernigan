/*
* What is the difference in memory allocation for union and structure?
* What two operators are used to access members of a structure?
* What's wrong with this template?
*        structure {
*           char itable;
*           int num[20];
*          char * my_char
*         }
* Can we compare two structures using any built-in operator, how to compare structures correctly?
* Consider the following structure:
*          typedef struct
*          {
*               char A;
*               int  B;
*               char C;
*          } TestStruct;
*           What value will sizeof(TestStruct) return and why?
*           How to minimize the size of the TestStruct structure?
* 
*/

/*
---- What is the difference in memory allocation for union and structure?
A union can have numerous members, but only one of them can occupy the memory at any one moment.
With structures every members occupy the memory everytime.

---- What two operators are used to access members of a structure?
The dot (.) operator is used to access a structure member. 
The arrow (->) operator is to access the members of a structure 
when the pointer references the structure.

---- What's wrong with this template?
structure {
    char itable;
    int num[20];
    char * my_char
}
Firstly, we need write struct word before structure word;
Then we must use semicolon(;) after char * my_char;
The last, ; needs to be used after }       

---- Can we compare two structures using any built-in operator, how to compare structures correctly?
In C language, we cannot compare two structures using any built-in operator. 
We need to compare each member of the structures individually to determine if they are equal.

----Consider the following structure:
typedef struct {
    char A;
    int  B;
    char C;
} TestStruct;
---- What value will sizeof(TestStruct) return and why?
in 32 bytes system:
The sizeof(TestStruct) will return 12 because of the memory alignment and padding rules in C.
Char types will extend from 1 for 4 bytes. 3*4 =12
---- How to minimize the size of the TestStruct structure?
We must place all char types at the begining(or finish) of struct. It will be 8 bytes length.
*/


#include <stdio.h>

typedef struct {
    char A;
    int  B;
    char C;   
} TestStruct;

int main () {
printf("Size: %lu\n", sizeof(TestStruct));
}
