#include <stdio.h>

int main() {
    double x1, y1, x2, y2, x3, y3;
    
    printf("Enter the coordinates of the first point (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    
    printf("Enter the coordinates of the second point (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);
    
    printf("Enter the coordinates of the third point (x3 y3): ");
    scanf("%lf %lf", &x3, &y3);
    
    // Calculating slopes of line segments
    double slope1 = (y2 - y1) / (x2 - x1);
    double slope2 = (y3 - y2) / (x3 - x2);
    
    // Checking if the slopes are equal
    if (slope1 == slope2) {
        printf("The three points fall on the same straight line.\n");
    } else {
        printf("The three points do not fall on the same straight line.\n");
    }
    
    return 0;
}
