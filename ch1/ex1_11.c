#include <stdio.h>

/* testing words counter program */

#define IN  1 /* inside word */
#define OUT 1 /* outside word */

int main()
{
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n') 
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }
    printf("line: %d, words: %d, chars: %d\n", nl, nw, nc);
    return 0;
}
