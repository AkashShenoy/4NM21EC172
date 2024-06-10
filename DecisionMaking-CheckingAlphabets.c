#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char ch;
    scanf(" %c", &ch);

    if (isalpha(ch)) {
        ch = tolower(ch); // Convert to lowercase for easier comparison
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            printf("Vowel\n");
        else
            printf("Consonant\n");
    } else {
        printf("Not an alphabet\n");
    }

    return 0;
}
