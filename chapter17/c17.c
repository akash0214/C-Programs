#include <stdio.h>
#include <string.h>

#define MAX_PARTS 100

typedef struct
{
    char serial_number[4];
    int year_of_manufacture;
    char material[20];
    int quantity_manufactured;
} Part;

void retrieveParts(Part parts[], int count, const char *start_serial, const char *end_serial)
{
    printf("Parts with serial numbers between %s and %s:\n", start_serial, end_serial);
    for (int i = 0; i < count; i++)
    {
        if (strcmp(parts[i].serial_number, start_serial) >= 0 && strcmp(parts[i].serial_number, end_serial) <= 0)
        {
            printf("Serial Number: %s\n", parts[i].serial_number);
            printf("Year of Manufacture: %d\n", parts[i].year_of_manufacture);
            printf("Material: %s\n", parts[i].material);
            printf("Quantity Manufactured: %d\n", parts[i].quantity_manufactured);
            printf("\n");
        }
    }
}

int main()
{
    Part parts[MAX_PARTS];
    int count;

    printf("Enter the number of parts: ");
    scanf("%d", &count);

    for (int i = 0; i < count; i++)
    {
        printf("Enter details for part %d\n", i + 1);
        printf("Serial Number: ");
        scanf("%s", parts[i].serial_number);
        printf("Year of Manufacture: ");
        scanf("%d", &parts[i].year_of_manufacture);
        printf("Material: ");
        scanf("%s", parts[i].material);
        printf("Quantity Manufactured: ");
        scanf("%d", &parts[i].quantity_manufactured);
    }

    retrieveParts(parts, count, "BB1", "CC6");

    return 0;
}
