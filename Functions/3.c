#include <stdio.h>
#include <string.h>

void reverseString(char word[]);

int main(void) {
    char string[100];

    printf("Enter a word: ");
    scanf("%s", string);

    reverseString(string);
}

void reverseString(char word[]) {
    int length = strlen(word);

    for (int i = 0; i < length / 2; i++) {
        char temp = word[i];
        word[i] = word[length - i - 1];
        word[length - i -1] = temp;
    }

    printf("Reversed Sting: %s\n", word);
}