#include <stdio.h>

int main() {
    int num, originalNum, remainder, octal = 0, place = 1;

    // Enter the integer from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Converting the integer to its octal equivalent
    while (num != 0) {
        remainder = num % 8;
        octal += remainder * place;
        num /= 8;
        place *= 10;
    }

    printf("The octal equivalent of %d is %d.\n", originalNum, octal);

    return 0;
}
