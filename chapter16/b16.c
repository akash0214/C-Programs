#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isVowel(char ch)
{
    char lower = tolower(ch);
    return (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u');
}

int main()
{
    char sentence[81];
    char result[81];
    int j = 0;

    printf("Enter a sentence (max 80 characters): ");
    fgets(sentence, sizeof(sentence), stdin);

    for (int i = 0; i < strlen(sentence); i++)
    {
        if (!isVowel(sentence[i]))
        {
            result[j++] = sentence[i];
        }
    }
    result[j] = '\0';

    printf("Modified sentence: %s\n", result);

    return 0;
}
