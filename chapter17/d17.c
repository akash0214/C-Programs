#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_CRICKETERS 20

typedef struct
{
    char name[50];
    int age;
    int test_matches;
    float average_runs;
} Cricketer;

int compare(const void *a, const void *b)
{
    Cricketer *cricketerA = (Cricketer *)a;
    Cricketer *cricketerB = (Cricketer *)b;
    if (cricketerA->average_runs > cricketerB->average_runs)
        return 1;
    else if (cricketerA->average_runs < cricketerB->average_runs)
        return -1;
    else
        return 0;
}

int main()
{
    Cricketer cricketers[NUM_CRICKETERS];

    for (int i = 0; i < NUM_CRICKETERS; i++)
    {
        printf("Enter details for cricketer %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]%*c", cricketers[i].name);
        printf("Age: ");
        scanf("%d", &cricketers[i].age);
        printf("Number of Test Matches: ");
        scanf("%d", &cricketers[i].test_matches);
        printf("Average Runs: ");
        scanf("%f", &cricketers[i].average_runs);
        printf("\n");
    }

    qsort(cricketers, NUM_CRICKETERS, sizeof(Cricketer), compare);

    printf("Cricketers sorted by average runs in ascending order:\n");
    for (int i = 0; i < NUM_CRICKETERS; i++)
    {
        printf("Name: %s, Age: %d, Test Matches: %d, Average Runs: %.2f\n",
               cricketers[i].name, cricketers[i].age, cricketers[i].test_matches, cricketers[i].average_runs);
    }

    return 0;
}
