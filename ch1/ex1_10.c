#include <stdio.h>

/* changing tabs, backspace, backslash to visual symbols */
int main()
{
    int c, n_ = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            putchar('\\');
            putchar('t');
        } else if (c == '\b') {
            putchar('\\');
            putchar('t');
        } else if ( c == '\\') {
            putchar('\\');
            putchar('\\');
        } else putchar(c);
    }
    return 0;
}
