#include <stdio.h>

void merge_files(const char *file1, const char *file2, const char *output_file)
{
    FILE *f1 = fopen(file1, "r");
    FILE *f2 = fopen(file2, "r");
    FILE *out_file = fopen(output_file, "w");

    if (f1 == NULL || f2 == NULL || out_file == NULL)
    {
        printf("Error opening files.\n");
        return;
    }

    char line1[1000], line2[1000];
    int lines_copied1 = 0, lines_copied2 = 0;

    while ((fgets(line1, sizeof(line1), f1) != NULL) || (fgets(line2, sizeof(line2), f2) != NULL))
    {
        if (lines_copied1 < lines_copied2)
        {
            fprintf(out_file, "%s", line1);
            lines_copied1++;
        }
        else
        {
            fprintf(out_file, "%s", line2);
            lines_copied2++;
        }
    }

    while (fgets(line1, sizeof(line1), f1) != NULL)
    {
        fprintf(out_file, "%s", line1);
    }
    while (fgets(line2, sizeof(line2), f2) != NULL)
    {
        fprintf(out_file, "%s", line2);
    }

    // Close files
    fclose(f1);
    fclose(f2);
    fclose(out_file);
}

int main()
{
    const char *file1 = "file1.txt";
    const char *file2 = "file2.txt";
    const char *output_file = "merged_file.txt";

    merge_files(file1, file2, output_file);

    printf("Files merged successfully.\n");

    return 0;
}
