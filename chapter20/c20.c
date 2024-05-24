#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORD_LENGTH 1000

void replace_word(const char *old_word, const char *new_word, const char *filename)
{
    FILE *file = fopen(filename, "r+");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return;
    }

    char buffer[MAX_WORD_LENGTH];
    char *pos;

    while ((pos = fgets(buffer, sizeof(buffer), file)) != NULL)
    {
        while ((pos = strstr(pos, old_word)) != NULL)
        {
            fseek(file, pos - buffer, SEEK_CUR);
            fprintf(file, "%s", new_word);
            pos += strlen(old_word);
        }
    }

    fclose(file);
}

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        printf("Usage: %s <old word> <new word> <filename>\n", argv[0]);
        return 1;
    }

    const char *old_word = argv[1];
    const char *new_word = argv[2];
    const char *filename = argv[3];

    replace_word(old_word, new_word, filename);

    printf("Word replaced successfully.\n");

    return 0;
}
