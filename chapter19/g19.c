#include <stdio.h>

struct donor
{
    char name[21];
    char address[41];
    int age;
    int blood_type;
};

void print_young_blood_donors(const char *file_name)
{
    FILE *file = fopen(file_name, "r");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return;
    }

    struct donor d;

    printf("Blood donors below 25 years old with blood type 2:\n");
    printf("-------------------------------------------------\n");
    printf("%-20s %-40s %-4s %s\n", "Name", "Address", "Age", "Blood Type");
    printf("-------------------------------------------------\n");

    while (fread(&d, sizeof(struct donor), 1, file) == 1)
    {
        if (d.age < 25 && d.blood_type == 2)
        {
            printf("%-20s %-40s %-4d %d\n", d.name, d.address, d.age, d.blood_type);
        }
    }

    fclose(file);
}

int main()
{
    const char *file_name = "blood_donors.dat";

    print_young_blood_donors(file_name);

    return 0;
}
