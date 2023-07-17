#include <stdio.h>

/* output of tempereture table for fahrentgeit and celsius */
int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;    /* lower temperature level */
    upper = 300;  /* higher temp level */
    step  = 20;   /* step size */

    celsius = lower;
    printf("********************\n");
    printf("t.Celsius  t.Fahr\n");
    printf("********************\n");
    while (celsius <= upper) {
        fahr = celsius * (9.0/5.0)  + 32.0;
        printf("%6.0f \t %6.1f\n", celsius, fahr);
        celsius += step;
    }
    return 0;
}