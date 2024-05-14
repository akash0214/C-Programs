#include <stdio.h>

int main() {
    double weight, height;
    
    // Input weight and height from the user
    printf("Enter weight (in kilograms): ");
    scanf("%lf", &weight);
    
    printf("Enter height (in meters): ");
    scanf("%lf", &height);
    
    // Calculate BMI
    double bmi = weight / (height * height);
    
    // Determine the BMI category
    const char* category;
    if (bmi < 15) {
        category = "Starvation";
    } else if (bmi >= 15.1 && bmi <= 17.5) {
        category = "Anorexic";
    } else if (bmi >= 17.6 && bmi <= 18.5) {
        category = "Underweight";
    } else if (bmi >= 18.6 && bmi <= 24.9) {
        category = "Ideal";
    } else if (bmi >= 25 && bmi <= 25.9) {
        category = "Overweight";
    } else if (bmi >= 30 && bmi <= 30.9) {
        category = "Obese";
    } else {
        category = "Morbidly obese";
    }
    
    // Output the BMI and BMI category
    printf("BMI: %.2f\n", bmi);
    printf("BMI Category: %s\n", category);
    
    return 0;
}
