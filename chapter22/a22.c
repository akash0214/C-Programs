#include <stdio.h>

struct Date
{
    unsigned int day : 5;
    unsigned int month : 4;
    unsigned int year : 12;
};

int compare_dates(const void *a, const void *b)
{
    const struct Date *date1 = (const struct Date *)a;
    const struct Date *date2 = (const struct Date *)b;

    if (date1->year != date2->year)
    {
        return date1->year - date2->year;
    }
    else if (date1->month != date2->month)
    {
        return date1->month - date2->month;
    }
    else
    {
        return date1->day - date2->day;
    }
}

int main()
{
    struct Date join_date[10];

    printf("Enter join dates of 10 employees (day month year):\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%u %u %u", &join_date[i].day, &join_date[i].month, &join_date[i].year);
    }

    qsort(join_date, 10, sizeof(struct Date), compare_dates);

    printf("\nJoin dates of 10 employees in ascending order of year:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%u-%u-%u\n", join_date[i].day, join_date[i].month, join_date[i].year);
    }

    return 0;
}
