#include <stdio.h>

/* Print a histogram of the lengths of words in sample input.
  Horizontal histogram is fairly easy, vertical is harder. */

#define IN  1
#define OUT 0

main() {
    int c, state, counter, i, j;
    counter = 0;
    int word_lengths[10];

    // instantiate our array to zero values;
    for (i = 0; i < 10; ++i) {
        word_lengths[i] = 0;
    }

    // read next input until input is escaped
    while ((c = getchar()) != EOF) {

        // check for spaces, tabs, etc, add lenth of word to array; 
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
            // counter - 1 is to account for zero index
            ++word_lengths[counter - 1];
            counter = 0;
            for (i = 0; i < 10; ++i) {
            }
        }
        // if we're in a word, tick a counter for each char in that word
        else if (state == OUT) {
            state = IN;
        }

        if (state == IN) {
            ++counter;
        }
    }

    for (i = 0; i < 10; ++i) {
        for (j = 0; j < word_lengths[i]; ++j)
            printf("*");
        // printf("%d %d letter words \n", word_lengths[i], i + 1);
        printf("\n");
    }
}