/*Write a C program to count the number of words in a given string.*/


#include <stdio.h>

int main() {
    char str[200];
    int i, words = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);   // reads string with spaces

    for(i = 0; str[i] != '\0'; i++) {
        if((str[i] == ' ' || str[i] == '\n' || str[i] == '\t') &&
           (str[i+1] != ' ' && str[i+1] != '\n' && str[i+1] != '\t' && str[i+1] != '\0')) {
            words++;
        }
    }

    // If the first character is not a space, count the first word
    if(str[0] != ' ' && str[0] != '\n' && str[0] != '\t')
        words++;

    printf("Number of words = %d\n", words);

    return 0;
}
