#include <stdio.h>

int main(void) {
    int num;

    printf("Type your int (0-31): \n> ");
    scanf("%i", &num);

    int bin = ((num / 16) % 2 * 10000) +
              ((num / 8) % 2 * 1000) +
              ((num / 4) % 2 * 100) +
              ((num / 2) % 2 * 10) +
              (num % 2 * 1);

    printf("Binary: %05d\n", bin);

    return 0;
}
