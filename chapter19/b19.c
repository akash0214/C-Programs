#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *source_file, *destination_file;
    char source_filename[] = "source.txt";
    char destination_filename[] = "destination.txt";
    char ch;

    source_file = fopen(source_filename, "r");
    if (source_file == NULL)
    {
        fprintf(stderr, "Error opening source file\n");
        return 1;
    }

    destination_file = fopen(destination_filename, "w");
    if (destination_file == NULL)
    {
        fprintf(stderr, "Error opening destination file\n");
        fclose(source_file);
        return 1;
    }

    while ((ch = fgetc(source_file)) != EOF)
    {
        if (islower(ch))
        {
            ch = toupper(ch); 
        }
        fputc(ch, destination_file);
    }

    // Close files
    fclose(source_file);
    fclose(destination_file);

    printf("File copied successfully\n");

    return 0;
}
