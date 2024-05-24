#include <stdio.h>

#define MAX_STUDENTS 100
#define MAX_NAME_LENGTH 50

void store_names(const char *file_name, char names[][MAX_NAME_LENGTH], int num_students)
{
    FILE *file = fopen(file_name, "w");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return;
    }

    for (int i = 0; i < num_students; i++)
    {
        fprintf(file, "%s\n", names[i]);
    }

    fclose(file);
}

void display_nth_name(const char *file_name, int n)
{
    FILE *file = fopen(file_name, "r");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return;
    }

    char name[MAX_NAME_LENGTH];
    int count = 0;

    while (fgets(name, sizeof(name), file) != NULL)
    {
        count++;
        if (count == n)
        {
            printf("Name at position %d: %s", n, name);
            fclose(file);
            return;
        }
    }

    printf("Name at position %d not found.\n", n);
    fclose(file);
}

int main()
{
    const char *file_name = "student_names.txt";
    char names[MAX_STUDENTS][MAX_NAME_LENGTH];
    int num_students;

    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    printf("Enter the names of students:\n");
    for (int i = 0; i < num_students; i++)
    {
        scanf("%s", names[i]);
    }

    store_names(file_name, names, num_students);

    int n;
    printf("Enter the position of the name to display: ");
    scanf("%d", &n);
    display_nth_name(file_name, n);

    return 0;
}
