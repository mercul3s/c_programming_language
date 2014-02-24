#include <stdio.h>

#define MAXLINE 1000
/* Write a function reverse(s) that reverses the character string s. 
Use it to write a program that reverses its input a line at a time. */

void reverse(char s[], int i);
int getLine(char line[], int maxline);

main() {
    char c;
    int len;
    char line[MAXLINE];

    // continue reversing and printing if there is input
    while ((len = getLine(line, MAXLINE)) > 0) {
        reverse(line, len - 1);
        printf("%s\n", line);
    }
    return 0; // default return on successful run
}

// take string, length of array, and use it to loop over string and switch
// the places of the letters, reversing it. Temp variable is used to hold
// the values during swapping.
void reverse(char s[], int len) {

    int i;
    char temp;
    for (i = 0; i <= len/2; ++i) {
        temp = s[i];
        s[i] = s[len-i];
        s[len-i] = temp;
    }
    s[len+1] = '\0';
}

// getLine builds an array of the current input while it is not a space, tab,
// or newline character. The array is not longer than our maximum line input.
int getLine(char s[], int lim) {
    int c, i; 

    // split string on spaces, tabs, newlines
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n' &&c != ' ' && c != '\t'; ++i) {
        s[i] = c; 
    }
    // return our index as the length of the array
    return i; 
}