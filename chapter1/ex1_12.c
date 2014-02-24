#include <stdio.h>

/* Write a program that prints its input one word per line. */

// state machines to detect a word

#define IN  1 
#define OUT 0

main() {

    int c, state;
    state = OUT;

    // read char while not end of file
    while ((c = getchar()) != EOF) {

        // change state to out of word if a word is not detected
        if(c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
            printf("\n");
        }   

        // if the next item in stream is a char, change state and print
        else if (c != ' ' || c != '\n' || c != '\t') {
            state = IN;
            printf("%c", c);
        }
    }
}