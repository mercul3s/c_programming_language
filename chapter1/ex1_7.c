#include <stdio.h>

/*
Int is used to hold the value that getchar returns, including EOF
EOF is defined as an integer by stdio. It is a different value than
any char value.

Exercise 1-7. Write a program to print the value of EOF.
*/
main() {
    int c;
    while ((c = getchar()) != EOF) {
        printf("%c\n",c);
    }   
    // print the integer value of c when EOF is reached
    printf("%1d\n",c);
}

