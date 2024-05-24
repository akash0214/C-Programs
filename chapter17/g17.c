#include <stdio.h>

typedef struct
{
    int day;
    int month;
    int year;
} Date;

int compare_dates(Date d1, Date d2)
{
    if (d1.year == d2.year && d1.month == d2.month && d1.day == d2.day)
    {
        return 0; // Dates are equal
    }
    else
    {
        return 1; // Dates are not equal
    }
}

int main()
{
    Date date1 = {25, 5, 2023};
    Date date2 = {25, 5, 2023};

    int result = compare_dates(date1, date2);

    if (result == 0)
    {
        printf("Dates are equal\n");
    }
    else
    {
        printf("Dates are not equal\n");
    }

    return 0;
}
