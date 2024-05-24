#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50

struct student
{
    int roll_number;
    char name[MAX_NAME_LENGTH];
};

void process_transaction_file(const char *master_file, const char *transaction_file, const char *output_file)
{
    FILE *master_fp = fopen(master_file, "r");
    FILE *transaction_fp = fopen(transaction_file, "r");
    FILE *output_fp = fopen(output_file, "w");

    if (master_fp == NULL || transaction_fp == NULL || output_fp == NULL)
    {
        printf("Error opening files.\n");
        return;
    }

    struct student master_student;
    struct student transaction_student;
    int is_transaction_finished = 0;

    if (fread(&master_student, sizeof(struct student), 1, master_fp) != 1)
    {
        printf("Master file is empty.\n");
        return;
    }

    if (fread(&transaction_student, sizeof(struct student), 1, transaction_fp) != 1)
    {
        printf("Transaction file is empty.\n");
        return;
    }

    while (!feof(master_fp) && !feof(transaction_fp))
    {
        if (master_student.roll_number < transaction_student.roll_number)
        {
            fwrite(&master_student, sizeof(struct student), 1, output_fp);
            if (fread(&master_student, sizeof(struct student), 1, master_fp) != 1)
            {
                break;
            }
        }
        else if (master_student.roll_number > transaction_student.roll_number)
        {
            fwrite(&transaction_student, sizeof(struct student), 1, output_fp);
            if (fread(&transaction_student, sizeof(struct student), 1, transaction_fp) != 1)
            {
                is_transaction_finished = 1;
                break;
            }
        }
        else
        {
            if (strcmp(transaction_student.name, "-DELETE-") != 0)
            {
                fwrite(&transaction_student, sizeof(struct student), 1, output_fp);
            }
            if (fread(&transaction_student, sizeof(struct student), 1, transaction_fp) != 1)
            {
                is_transaction_finished = 1;
                break;
            }
            if (fread(&master_student, sizeof(struct student), 1, master_fp) != 1)
            {
                break;
            }
        }
    }

    while (!feof(master_fp))
    {
        fwrite(&master_student, sizeof(struct student), 1, output_fp);
        if (fread(&master_student, sizeof(struct student), 1, master_fp) != 1)
        {
            break;
        }
    }

    if (!is_transaction_finished)
    {
        while (!feof(transaction_fp))
        {
            fwrite(&transaction_student, sizeof(struct student), 1, output_fp);
            if (fread(&transaction_student, sizeof(struct student), 1, transaction_fp) != 1)
            {
                break;
            }
        }
    }

    // Close all files
    fclose(master_fp);
    fclose(transaction_fp);
    fclose(output_fp);
}

int main()
{
    const char *master_file = "master_file.dat";
    const char *transaction_file = "transaction_file.dat";
    const char *output_file = "updated_list.dat";

    process_transaction_file(master_file, transaction_file, output_file);

    printf("Updated list created successfully.\n");

    return 0;
}
