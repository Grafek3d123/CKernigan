Doesn't finish yet.

#include <stdio.h>

/* counting of lines from input */
int main()
{
    int c, nl, n_, nt;
    
    nl = 0, n_ = 0, nt = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++nl;
        } else if (c == ' ') {
            ++n_;
        } else if (c == '\t') {
            ++nt;
        }
    }
    printf("'\\n': %d, spaces: %d, tabs: %d\n", nl, n_, nt);

    return 0;
}