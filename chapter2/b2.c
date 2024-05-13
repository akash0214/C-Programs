#include <stdio.h>
#include <math.h>

int main() {
    float x, y, r, theta;
    
    printf("Enter the value of x: ");
    scanf("%f", &x);
    
    printf("Enter the value of y: ");
    scanf("%f", &y);
    
    r = sqrt(x * x + y * y);
    theta = atan2(y, x);
    
    printf("Polar coordinates: (r=%.2f, theta=%.2f radians)\n", r, theta);
    
    return 0;
}
