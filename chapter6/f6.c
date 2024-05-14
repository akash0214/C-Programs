#include <stdio.h>

int main() {
    int population = 100000;
    double growth_rate = 0.10;

    printf("Population at the end of each year in the last decade:\n");

    for (int year = 1; year <= 10; ++year) {
        population += population * growth_rate;
        printf("Year %d: %d\n", year, population);
    }

    return 0;
}
