#include <stdio.h>

int main(void){

    int num, c, d, u;
    // getting number
    printf("Type a whole number (1 - 100)");
    scanf("%i", &num);

    u = num%10;
    d = num%100/10;

    if (num % 100 == 0)
        c = 1;
    else { c = 0; }

    // the real problem
    if (num > 1 && num <= 100) {
            switch (c){
                case 1: printf("One Hundred "); break; // the hundrade case
                case 0:
                    switch (d){ // TENS
                        case 0: break; // if it is just an unit
                        case 1:
                            switch (u){
                                case 0: printf("Ten");
                                case 1: printf("Eleven");break;
                                case 2: printf("Twelve"); break;
                                case 3: printf("Thirteen"); break;
                                case 4: printf("Fourteen"); break;
                                case 5: printf("Fifteen"); break;
                                case 6: printf("Sixteen"); break;
                                case 7: printf("Seventeen"); break;
                                case 8: printf("Eighteen"); break;
                                case 9: printf("Nineteen"); break;
                                }
                            break;
                        case 2: printf("Twenty "); break;
                        case 3: printf("Thirty "); break;
                        case 4: printf("Fourty "); break;
                        case 5: printf("Fifity "); break;
                        case 6: printf("Sixty "); break;
                        case 7: printf("Seventy "); break;
                        case 8: printf("Eighty "); break;
                        case 9: printf("Ninety "); break;
                    }

                    }
        if (d > 0 & d != 1){
            switch (u) // UNITS
            {
            case 0: break;
            case 1: printf("one"); break;
            case 2: printf("two"); break;
            case 3: printf("three"); break;
            case 4: printf("four"); break;
            case 5: printf("five"); break;
            case 6: printf("six"); break;
            case 7: printf("seven"); break;
            case 8: printf("eight"); break;
            case 9: printf("nine");break;
            default: break;
            }
        }
        printf("\n");
        }
        else
            printf("Your number does not respect the selected range"); // wrong input
}
