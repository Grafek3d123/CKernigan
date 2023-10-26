/*
* Write a program to print the number days in the months 
* using switch statement (the 1st version) and if-else
* ladder (the 2nd version).
*/

#include <stdio.h>
//#define SWITCH

int main () {
short mNum;

printf("Enter month number [1-12]:");
scanf("%hd", &mNum);

#ifdef SWITCH
switch (mNum) {
  case 1: case 3: case 5: case 7: case 8: case 10: case 12:
    printf("There are %d days in your month\n", 31);
    break;
  case 4: case 6: case 9: case 11:
      printf("There are %d days in your month\n", 30);
    break;
  default:  // in 2 month (February)
      printf("There are %d days in your month\n", 28);
}
#endif

#ifndef SWITCH
if (mNum == 1 || mNum == 3 || mNum == 5 || mNum == 7 || mNum == 8 || mNum == 10 || mNum == 12) {
    printf("There are %d days in your month\n", 31); 
}
else if (mNum == 4 || mNum == 6 || mNum == 9 || mNum == 11) {
    printf("There are %d days in your month\n", 30); 
}
else {
    printf("There are %d days in your month\n", 28); 
}
#endif
}