#include <stdio.h>

int main() {
    char input;
    printf("Enter a character:\n");
    scanf("%c", &input);

    switch (input) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a vowel.\n", input);
            break;
        default:
            printf("%c is a consonant.\n", input);
    }

    return 0;
}
