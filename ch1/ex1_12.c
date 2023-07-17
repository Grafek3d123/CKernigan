#include <stdio.h>

/* shows one word on one line */

#define IN  1 /* inside word */
#define OUT 1 /* outside word */

int main()
{
    int c, state;

    state = OUT;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
            putchar('\n');
        } else {
            state = IN;
            putchar(c);
        }
    }
    return 0;
}
