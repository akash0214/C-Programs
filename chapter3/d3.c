#include <stdio.h>

int main() {
    double number;
    
    printf("Enter a number: ");
    scanf("%lf", &number);
    
    double absolute_value = (number < 0) ? -number : number;
    
    printf("Absolute value: %.2f\n", absolute_value);
    
    return 0;
}
