#include <stdio.h>
//#define WHILE

int main () {
long base, power, result;

printf("enter base(integer): ");
scanf("%ld", &base);
printf("enter power(integer): ");
scanf("%ld", &power);

if (power == 0) printf("result = %d\n", 1);
else {
  result = base;
#ifdef WHILE
  while(--power > 0) {
#endif
#ifndef WHILE
  for( ; --power > 0; ) {
#endif
    result *= base;
  }
  printf("result = %ld\n", result);
}
}