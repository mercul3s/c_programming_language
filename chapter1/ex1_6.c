#include <stdio.h>

/*
Int is used to hold the value that getchar returns, including EOF
EOF is defined as an integer by stdio. It is a different value than
any char value.

Exercsise 1-6. Verify that the expression getchar() != EOF is 0 or 1.

* Need to lookup how to do this - how do I print the ASCII value of a 
char/int in C? looks like it just prints the char. EOF is ctrl+d.
*/

main() {
    int c;
    while ((c = getchar()) != EOF) {
        // this line prints the value of getchar() comparison
        printf("%1d\n", getchar() != EOF);
        // and this one prints the character
        printf("%c\n",c);
    }   
}

