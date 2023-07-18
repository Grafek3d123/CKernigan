#include <stdio.h>

/* copy input to output */
int main()
{
    printf("Please input \"^D\" or another char: ");
    printf("\n%d\n", (getchar() != EOF));

    return 0;
}