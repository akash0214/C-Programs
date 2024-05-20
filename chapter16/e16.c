#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isVowel(char c)
{
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int countSuccessiveVowels(char *text)
{
    int count = 0;
    int length = strlen(text);

    for (int i = 0; i < length - 1; i++)
    {
        if (isVowel(text[i]) && isVowel(text[i + 1]))
        {
            count++;
        }
    }

    return count;
}

int main()
{
    char text[256];

    printf("Enter a line of text: ");
    fgets(text, sizeof(text), stdin);

    text[strcspn(text, "\n")] = '\0';

    int result = countSuccessiveVowels(text);

    printf("Number of successive vowels: %d\n", result);

    return 0;
}
