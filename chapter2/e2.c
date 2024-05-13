#include <stdio.h>
#include <math.h>

#define DEG_TO_RAD(x) ((x) * M_PI / 180.0)

int main() {
    double angle_degrees;
    
    printf("Enter the angle in degrees: ");
    scanf("%lf", &angle_degrees);
    
    double angle_radians = DEG_TO_RAD(angle_degrees);
    
    double sine = sin(angle_radians);
    double cosine = cos(angle_radians);
    double tangent = tan(angle_radians);
    
    // Avoiding division by zero for cotangent, secant, and cosecant
    double cotangent = (tangent != 0) ? 1.0 / tangent : 0.0;
    double secant = (cosine != 0) ? 1.0 / cosine : 0.0;
    double cosecant = (sine != 0) ? 1.0 / sine : 0.0;
    
    printf("Sine: %.4f\n", sine);
    printf("Cosine: %.4f\n", cosine);
    printf("Tangent: %.4f\n", tangent);
    printf("Cotangent: %.4f\n", cotangent);
    printf("Secant: %.4f\n", secant);
    printf("Cosecant: %.4f\n", cosecant);
    
    return 0;
}
