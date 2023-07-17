#include <stdio.h>

/* output of tempereture table for fahrentgeit and celsius */
int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;    /* lower temperature level */
    upper = 300;  /* higher temp level */
    step = 20;

    fahr = lower;
    printf("********************\n");
    printf("t.Fahr \t t.Celsius\n");
    printf("********************\n");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f \t %6.1f\n", fahr, celsius);
        fahr += step;
    }
    return 0;
}