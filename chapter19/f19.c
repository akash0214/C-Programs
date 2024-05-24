#include <stdio.h>

struct date
{
    int d, m, y;
};

struct employee
{
    int empcode[6];
    char empname[20];
    struct date join_date;
    float salary;
};

void swap(struct employee *a, struct employee *b)
{
    struct employee temp = *a;
    *a = *b;
    *b = temp;
}

int compare_dates(struct date d1, struct date d2)
{
    if (d1.y != d2.y)
    {
        return d1.y - d2.y;
    }
    else if (d1.m != d2.m)
    {
        return d1.m - d2.m;
    }
    else
    {
        return d1.d - d2.d;
    }
}

void sort_by_join_date(struct employee arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (compare_dates(arr[j].join_date, arr[j + 1].join_date) > 0)
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void read_records(const char *file_name, struct employee arr[], int *n)
{
    FILE *file = fopen(file_name, "r");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return;
    }

    *n = 0;
    while (fscanf(file, "%d%d%d%s%d%d%d%f", &arr[*n].empcode[0], &arr[*n].empcode[1], &arr[*n].empcode[2],
                  arr[*n].empname, &arr[*n].join_date.d, &arr[*n].join_date.m, &arr[*n].join_date.y,
                  &arr[*n].salary) == 8)
    {
        (*n)++;
    }

    fclose(file);
}

void write_records(const char *file_name, struct employee arr[], int n)
{
    FILE *file = fopen(file_name, "w");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return;
    }

    for (int i = 0; i < n; i++)
    {
        fprintf(file, "%d %d %d %s %d %d %d %.2f\n", arr[i].empcode[0], arr[i].empcode[1], arr[i].empcode[2],
                arr[i].empname, arr[i].join_date.d, arr[i].join_date.m, arr[i].join_date.y, arr[i].salary);
    }

    fclose(file);
}

int main()
{
    const char *input_file = "employee_records.txt";
    const char *output_file = "sorted_employee_records.txt";
    const int max_records = 10;

    struct employee records[max_records];
    int num_records = 0;

    read_records(input_file, records, &num_records);

    sort_by_join_date(records, num_records);

    write_records(output_file, records, num_records);

    printf("Records sorted and written to file successfully.\n");

    return 0;
}
