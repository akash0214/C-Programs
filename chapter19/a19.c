#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 50
#define MAX_RECORDS 100

typedef struct
{
    char name[MAX_NAME_LENGTH];
    int age;
} Student;

// Compare function for sorting by name
int compare_names(const void *a, const void *b)
{
    const Student *student1 = (const Student *)a;
    const Student *student2 = (const Student *)b;
    return strcmp(student1->name, student2->name);
}

int main()
{
    FILE *file;
    char filename[] = "student_records.txt";
    Student students[MAX_RECORDS];
    int num_records = 0;

    file = fopen(filename, "r");
    if (file == NULL)
    {
        fprintf(stderr, "Error opening file\n");
        return 1;
    }

    while (fscanf(file, "%s %d", students[num_records].name, &students[num_records].age) == 2)
    {
        num_records++;
    }

    fclose(file);

    qsort(students, num_records, sizeof(Student), compare_names);

    printf("Sorted student records:\n");
    for (int i = 0; i < num_records; i++)
    {
        printf("%s %d\n", students[i].name, students[i].age);
    }

    return 0;
}
