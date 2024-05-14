#include <stdio.h>

int main()
{
    char class_obtained;
    int subjects_failed;
    int grace_marks = 0;

    printf("Enter the class obtained by the student (A/B/C): ");
    scanf(" %c", &class_obtained);

    printf("Enter the number of subjects failed: ");
    scanf("%d", &subjects_failed);

    switch (class_obtained)
    {
    case 'A':
        if (subjects_failed <= 3)
        {
            grace_marks = 5 * subjects_failed;
        }
        break;
    case 'B':
        if (subjects_failed <= 2)
        {
            grace_marks = 4 * subjects_failed;
        }
        break;
    case 'C':
        if (subjects_failed <= 1)
        {
            grace_marks = 5 * subjects_failed;
        }
        break;
    default:
        printf("Invalid input for class obtained.\n");
        return 1;
    }

    printf("Grace marks: %d\n", grace_marks);

    return 0;
}
