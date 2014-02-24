#include <stdio.h>

/* copy input to output, replacing any string of one or more spaces
   with one space. */

main() {
    int c, last;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n' && last != ' ') {
            putchar(' ');
            last = ' ';
        }
        else if (c != ' ' && c != '\t' && c != '\n') {
            putchar(c)
            last = c;
        }
    }
}