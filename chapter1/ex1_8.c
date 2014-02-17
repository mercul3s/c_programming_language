#include <stdio.h>

/* count newlines, tabs, and spaces in input,
   output to stdout on EOF */

main() {
    int c, newline_count, tab_count, blank_count;

    newline_count = 0;
    tab_count     = 0;
    blank_count   = 0;

    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++newline_count;
        else if (c == '\t')
            ++tab_count;
        else if (c == ' ')
            ++ blank_count;
    printf("Newlines: %d, Tabs: %d, Spaces: %d \n", newline_count, tab_count, blank_count);
}

