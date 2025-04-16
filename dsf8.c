//  Fahrenheit -> Celsius    **C = 5/9 * (F – 32)

#include <stdio.h>

int main(void) {
    int f;

    printf("Digite a temperatura em Fahrenheit:\n> ");
    scanf("%i", &f);

    float c = (5.0 / 9) * (f - 32);
    printf("\nSua temperatura em Celsius é: %.2f°C\n", c);
}
