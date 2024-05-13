#include <stdio.h>

int main() {
    float length, breadth, radius, rectangle_area, rectangle_perimeter, circle_area, circle_circumference;
    
    printf("Enter length of rectangle: ");
    scanf("%f", &length);
    
    printf("Enter breadth of rectangle: ");
    scanf("%f", &breadth);
    
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    
    rectangle_area = length * breadth;
    rectangle_perimeter = 2 * (length + breadth);
    circle_area = 3.14159 * radius * radius;
    circle_circumference = 2 * 3.14159 * radius;
    
    printf("Area of rectangle: %.2f\n", rectangle_area);
    printf("Perimeter of rectangle: %.2f\n", rectangle_perimeter);
    printf("Area of circle: %.2f\n", circle_area);
    printf("Circumference of circle: %.2f\n", circle_circumference);
    return 0;
}
