#include <stdio.h>
#include <string.h>

// arrays of numbers in words
char *ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
char *teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
char *tens[] = {"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
char *thousands[] = {"", "Thousand", "Million", "Billion"};

// converting number to words format
char *less_than_thousand(int n)
{
    static char result[1000];
    if (n == 0)
    {
        return "";
    }
    else if (n < 10)
    {
        sprintf(result, "%s", ones[n]);
    }
    else if (n < 20)
    {
        sprintf(result, "%s", teens[n - 10]);
    }
    else if (n < 100)
    {
        sprintf(result, "%s %s", tens[n / 10], ones[n % 10]);
    }
    else
    {
        sprintf(result, "%s Hundred %s", ones[n / 100], less_than_thousand(n % 100));
    }
    return result;
}


char *number_to_words(int num)
{
    static char result[1000];
    char words[1000] = "";
    int i = 0;
    while (num > 0)
    {
        if (num % 1000 != 0)
        {
            sprintf(result, "%s %s %s", less_than_thousand(num % 1000), thousands[i], words);
            strcpy(words, result);
        }
        num /= 1000;
        i++;
    }
    return result;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%s\n", number_to_words(num));
    return 0;
}
