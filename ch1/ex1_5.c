#include <stdio.h>

/* output of tempereture table for fahrentgeit and celsius */
int main()
{
    int fahr;
    printf("********************\n");
    printf("t.Celsius    t.Fahr*\n");
    printf("********************\n");
    for (fahr = 300; fahr >= 0; fahr = fahr - 20) {
        printf("%3d    \t     %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
    }

    return 0;
}