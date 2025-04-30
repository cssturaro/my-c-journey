// letter -> vogal or consonant

#include <stdio.h>

int main(void){
    char letter;

    printf("Type a lowercase letter\n> ");
    scanf("%c", &letter);

    switch (letter)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("That's a vogal");
        break;

    default:
        printf("That's a consonant");
        break;
    }
}
