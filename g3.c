#include <stdio.h>
#include <math.h>

int main() {
    double x_center, y_center, radius, x_point, y_point, distance;
    
    // Input coordinates of the center of the circle and its radius
    printf("Enter the coordinates of the center of the circle (x_center y_center): ");
    scanf("%lf %lf", &x_center, &y_center);
    
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    
    // Input coordinates of the point
    printf("Enter the coordinates of the point (x_point y_point): ");
    scanf("%lf %lf", &x_point, &y_point);
    
    // Calculate the distance between the center of the circle and the point
    distance = sqrt(pow(x_point - x_center, 2) + pow(y_point - y_center, 2));
    
    // Comparing distance with the radius to determining the position of the point
    if (distance < radius) {
        printf("The point lies inside the circle.\n");
    } else if (distance == radius) {
        printf("The point lies on the circle.\n");
    } else {
        printf("The point lies outside the circle.\n");
    }
    
    return 0;
}
