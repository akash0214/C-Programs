#include <stdio.h>

int main() {
    double y, i, x;

    printf("  y   |   x   |   i   \n");
    printf("------------------------\n");

    // Loop through y from 1 to 6
    for (y = 1; y <= 6; ++y) {
        // Loop through x from 5.5 to 12.5 in steps of 0.5
        for (x = 5.5; x <= 12.5; x += 0.5) {
            i = 2 + (y + 0.5 * x);
            printf("%.1f   |  %.1f  |  %.1f  \n", y, x, i);
        }
    }

    return 0;
}
