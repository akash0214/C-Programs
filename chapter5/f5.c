#include <stdio.h>

int main() {
    int num, min, max, count;
    
    // Input the count of numbers
    printf("Enter the count of numbers: ");
    scanf("%d", &count);
    
    // Input the first number to initialize min and max
    printf("Enter number 1: ");
    scanf("%d", &num);
    min = max = num;
    
    // Loop to input the rest of the numbers and update min and max
    for (int i = 2; i <= count; ++i) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        
        if (num < min) {
            min = num;
        }
        
        if (num > max) {
            max = num;
        }
    }
    
    // Calculate and print the range
    int range = max - min;
    printf("The range of the numbers is: %d\n", range);
    
    return 0;
}
