#include <stdio.h>

// converting weight from kilograms to grams, tons, and pounds
void convertWeight(float kg, float *grams, float *tons, float *pounds)
{
    *grams = kg * 1000;
    *tons = kg / 1000;
    *pounds = kg * 2.20462;
}

int main()
{
    float kg, grams, tons, pounds;

    // Input weight in kilograms
    printf("Enter weight in kilograms: ");
    scanf("%f", &kg);

    convertWeight(kg, &grams, &tons, &pounds);

    printf("Weight in grams: %.2f\n", grams);
    printf("Weight in tons: %.6f\n", tons);
    printf("Weight in pounds: %.2f\n", pounds);

    return 0;
}
