#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int originalNum, remainder, n = 0, result = 0;

    originalNum = num;

    // Counting the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // Calculating result
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    return result == num;
}

int main() {
    printf("Armstrong numbers between 1 and 500:\n");
    for (int i = 1; i <= 500; ++i) {
        if (isArmstrong(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
