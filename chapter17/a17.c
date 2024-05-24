#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 450

typedef struct
{
    int roll_number;
    char name[50];
    char department[30];
    char course[30];
    int year_of_joining;
} student;

void printStudentsByYear(student students[], int count, int year)
{
    printf("Students who joined in the year %d:\n", year);
    for (int i = 0; i < count; i++)
    {
        if (students[i].year_of_joining == year)
        {
            printf("%s\n", students[i].name);
        }
    }
}

void printStudentByRollNumber(student students[], int count, int roll_number)
{
    for (int i = 0; i < count; i++)
    {
        if (students[i].roll_number == roll_number)
        {
            printf("Roll Number: %d\n", students[i].roll_number);
            printf("Name: %s\n", students[i].name);
            printf("Department: %s\n", students[i].department);
            printf("Course: %s\n", students[i].course);
            printf("Year of Joining: %d\n", students[i].year_of_joining);
            return;
        }
    }
    printf("Student with roll number %d not found.\n", roll_number);
}

int main()
{
    student students[MAX_STUDENTS];
    int count;

    printf("Enter the number of students: ");
    scanf("%d", &count);

    for (int i = 0; i < count; i++)
    {
        printf("Enter details for student %d\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_number);
        printf("Name: ");
        scanf(" %[^\n]%*c", students[i].name);
        printf("Department: ");
        scanf(" %[^\n]%*c", students[i].department);
        printf("Course: ");
        scanf(" %[^\n]%*c", students[i].course);
        printf("Year of Joining: ");
        scanf("%d", &students[i].year_of_joining);
    }

    int choice;
    do
    {
        printf("\nMenu:\n");
        printf("1. Print names of all students who joined in a particular year\n");
        printf("2. Print data of a student by roll number\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            int year;
            printf("Enter the year: ");
            scanf("%d", &year);
            printStudentsByYear(students, count, year);
            break;
        }
        case 2:
        {
            int roll_number;
            printf("Enter the roll number: ");
            scanf("%d", &roll_number);
            printStudentByRollNumber(students, count, roll_number);
            break;
        }
        case 3:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice. Try again.\n");
        }
    } while (choice != 3);

    return 0;
}
