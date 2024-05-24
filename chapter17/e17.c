#include <stdio.h>

#define MAX_EMPLOYEES 100

typedef struct
{
    int day;
    int month;
    int year;
} Date;

typedef struct
{
    int emp_code;
    char name[50];
    Date date_of_joining;
} Employee;

int calculate_tenure(Date joining_date, Date current_date)
{
    int tenure_years = current_date.year - joining_date.year;

    if (current_date.month < joining_date.month ||
        (current_date.month == joining_date.month && current_date.day < joining_date.day))
    {
        tenure_years--;
    }

    return tenure_years;
}

int main()
{
    Employee employees[MAX_EMPLOYEES];
    int n;
    Date current_date;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Employee code: ");
        scanf("%d", &employees[i].emp_code);
        printf("Name: ");
        scanf(" %[^\n]%*c", employees[i].name);
        printf("Date of joining (dd mm yyyy): ");
        scanf("%d %d %d", &employees[i].date_of_joining.day, &employees[i].date_of_joining.month, &employees[i].date_of_joining.year);
    }

    printf("Enter the current date (dd mm yyyy): ");
    scanf("%d %d %d", &current_date.day, &current_date.month, &current_date.year);

    printf("Employees with tenure greater than or equal to 3 years:\n");
    for (int i = 0; i < n; i++)
    {
        int tenure = calculate_tenure(employees[i].date_of_joining, current_date);
        if (tenure >= 3)
        {
            printf("Name: %s, Tenure: %d years\n", employees[i].name, tenure);
        }
    }

    return 0;
}
