#include <stdio.h>

int main() {
    int hardness;
    double carbon_content;
    int tensile_strength;
    
    // Input values of hardness, carbon content, and tensile strength
    printf("Enter hardness: ");
    scanf("%d", &hardness);
    
    printf("Enter carbon content: ");
    scanf("%lf", &carbon_content);
    
    printf("Enter tensile strength: ");
    scanf("%d", &tensile_strength);
    
    // Determine the grade of steel based on the conditions
    int grade;
    if (hardness > 50 && carbon_content < 0.7 && tensile_strength > 5600) {
        grade = 10;
    } else if (hardness > 50 && carbon_content < 0.7) {
        grade = 9;
    } else if (carbon_content < 0.7 && tensile_strength > 5600) {
        grade = 8;
    } else if (hardness > 50 && tensile_strength > 5600) {
        grade = 7;
    } else if (hardness > 50 || carbon_content < 0.7 || tensile_strength > 5600) {
        grade = 6;
    } else {
        grade = 5;
    }
    
    // Output the grade of steel
    printf("Grade of steel: %d\n", grade);
    
    return 0;
}
