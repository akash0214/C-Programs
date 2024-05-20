#include <stdio.h>
#include <string.h>

void removeThe(char *str)
{
    char temp[256];
    char *word;
    int first = 1;

    temp[0] = '\0';
    word = strtok(str, " ");
    while (word != NULL)
    {
        if (strcmp(word, "the") != 0)
        {
            if (!first)
            {
                strcat(temp, " ");
            }
            strcat(temp, word);
            first = 0;
        }
        word = strtok(NULL, " ");
    }
    strcpy(str, temp);
}

int main()
{
    char sentence[256];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    sentence[strcspn(sentence, "\n")] = '\0';
    removeThe(sentence);

    printf("Modified sentence: %s\n", sentence);

    return 0;
}
