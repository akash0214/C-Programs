#include <stdio.h>

int main() {
    int num, positive_count = 0, negative_count = 0, zero_count = 0;
    char choice;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > 0) {
            positive_count++;
        } else if (num < 0) {
            negative_count++;
        } else {
            zero_count++;
        }

        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice); // Notice the space before %c to consume the newline character

    } while (choice == 'y' || choice == 'Y');

    printf("Count of positive numbers: %d\n", positive_count);
    printf("Count of negative numbers: %d\n", negative_count);
    printf("Count of zeros: %d\n", zero_count);

    return 0;
}
