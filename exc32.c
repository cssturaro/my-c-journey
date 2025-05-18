// char -> is it a vogal, consonant, number or simbol?

#include <stdio.h>

int main(void){
    char my_char;

    printf("Type a char (lowercase if letter) \n> ");
    scanf("%c", & my_char);

   if (my_char >= 48 && my_char <= 57)
   {
        printf("Number\n");
   }else if ((my_char >= 97 && my_char <= 122))
   {
        switch (my_char)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("Vogal\n");
                break;

            default:
                printf("Consonant\n");
                break;
        }
   }

    else{
        printf("Symbol\n");
    }


}
