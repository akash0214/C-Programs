#include <stdio.h>

int main() {
    int year;
    
    // Input the year from the user
    printf("Enter the year: ");
    scanf("%d", &year);
    
    // Zeller's Congruence algorithm to find the day of the week
    int day;
    int month = 1; // January
    if (month < 3) {
        month += 12;
        year -= 1;
    }
    int century = year / 100;
    int year_of_century = year % 100;
    day = (1 + (((month + 1) * 26) / 10) + year_of_century + (year_of_century / 4) + (century / 4) - (2 * century)) % 7;
    
    // Adjusting the day value to correspond with the Gregorian calendar
    if (day < 0) {
        day += 7;
    }
    
    // Map day value to the day of the week
    switch (day) {
        case 0:
            printf("Monday\n");
            break;
        case 1:
            printf("Tuesday\n");
            break;
        case 2:
            printf("Wednesday\n");
            break;
        case 3:
            printf("Thursday\n");
            break;
        case 4:
            printf("Friday\n");
            break;
        case 5:
            printf("Saturday\n");
            break;
        case 6:
            printf("Sunday\n");
            break;
    }
    
    return 0;
}
