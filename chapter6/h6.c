#include <stdio.h>

int main()
{
    printf("All 24 hours of the day with proper suffixes:\n");

    for (int hour = 0; hour < 24; ++hour)
    {
        if (hour == 0)
        {
            printf("Midnight\n");
        }
        else if (hour == 12)
        {
            printf("Noon\n");
        }
        else if (hour < 12)
        {
            printf("%d AM\n", hour);
        }
        else
        {
            printf("%d PM\n", hour - 12);
        }
    }

    return 0;
}
