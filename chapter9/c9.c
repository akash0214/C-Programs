#include <stdio.h>
#include <math.h>

//compute the distance between two points
float distance(float x1, float y1, float x2, float y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

//compute the area of a triangle using Heron's formula
float areaOfTriangle(float x1, float y1, float x2, float y2, float x3, float y3)
{
    float a = distance(x1, y1, x2, y2);
    float b = distance(x2, y2, x3, y3);
    float c = distance(x3, y3, x1, y1);
    float s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

//determine if a point (x, y) lies inside the triangle ABC
int isPointInsideTriangle(float x1, float y1, float x2, float y2, float x3, float y3, float x, float y)
{
    float areaABC = areaOfTriangle(x1, y1, x2, y2, x3, y3);
    float areaPBC = areaOfTriangle(x, y, x2, y2, x3, y3);
    float areaPCA = areaOfTriangle(x1, y1, x, y, x3, y3);
    float areaPAB = areaOfTriangle(x1, y1, x2, y2, x, y);

    return fabs(areaABC - (areaPBC + areaPCA + areaPAB)) < 1e-5;
}

int main()
{
    float x1, y1, x2, y2, x3, y3;
    float x, y;

    // Input vertices of the triangle
    printf("Enter the coordinates of vertex A (x1 y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Enter the coordinates of vertex B (x2 y2): ");
    scanf("%f %f", &x2, &y2);
    printf("Enter the coordinates of vertex C (x3 y3): ");
    scanf("%f %f", &x3, &y3);

    // Input the point to be checked
    printf("Enter the coordinates of the point (x y): ");
    scanf("%f %f", &x, &y);

    // Check if the point is inside the triangle
    if (isPointInsideTriangle(x1, y1, x2, y2, x3, y3, x, y))
    {
        printf("The point (%.2f, %.2f) is inside the triangle.\n", x, y);
    }
    else
    {
        printf("The point (%.2f, %.2f) is outside the triangle.\n", x, y);
    }

    return 0;
}
