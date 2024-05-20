#include <stdio.h>
#include <string.h>

void abbreviateNames(char *fullName)
{
    char result[256] = "";
    char *token = strtok(fullName, " ");
    int firstToken = 1;

    while (token != NULL)
    {
        if (firstToken)
        {
            result[0] = token[0];
            result[1] = '.';
            result[2] = '\0';
            firstToken = 0;
        }
        else
        {
            if (strchr(token, ' ') == NULL)
            {
                strcat(result, " ");
                strcat(result, token);
            }
            else
            {
                char temp[3] = {token[0], '.', '\0'};
                strcat(result, " ");
                strcat(result, temp);
            }
        }
        token = strtok(NULL, " ");
    }
    strcpy(fullName, result);
}

int main()
{
    char fullName[256];

    printf("Enter a full name: ");
    fgets(fullName, sizeof(fullName), stdin);

    fullName[strcspn(fullName, "\n")] = '\0';
    abbreviateNames(fullName);

    printf("Abbreviated name: %s\n", fullName);

    return 0;
}
