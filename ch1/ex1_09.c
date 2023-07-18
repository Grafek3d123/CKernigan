#include <stdio.h>

/* changing amount of whitespaces to one whitespace */
int main()
{
    int c, n_ = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ')
        {
            n_++;
        } else {
            if (n_ == 0) {
                putchar(c);
            } else {
                n_ = 0;
                putchar(' ');
                putchar(c);
            }
        }
    }
    return 0;
}