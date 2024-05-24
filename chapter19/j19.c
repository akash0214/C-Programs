#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORD_LENGTH 50

int is_article(const char *word)
{
    return (strcmp(word, "a") == 0 || strcmp(word, "the") == 0 || strcmp(word, "an") == 0);
}

void process_word(char *word)
{
    if (is_article(word))
    {
        memset(word, ' ', strlen(word));
    }
}

void process_file(const char *input_file, const char *output_file)
{
    FILE *input_fp = fopen(input_file, "r");
    FILE *output_fp = fopen(output_file, "w");

    if (input_fp == NULL || output_fp == NULL)
    {
        printf("Error opening files.\n");
        return;
    }

    char word[MAX_WORD_LENGTH];

    while (fscanf(input_fp, "%s", word) != EOF)
    {
        process_word(word);
        fprintf(output_fp, "%s ", word);
    }

    // Close files
    fclose(input_fp);
    fclose(output_fp);
}

int main()
{
    const char *input_file = "input.txt";
    const char *output_file = "output.txt";

    process_file(input_file, output_file);

    printf("Output file created successfully.\n");

    return 0;
}
