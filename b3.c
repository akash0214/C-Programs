#include <stdio.h>

int main()
{
    int ram, shyam, ajay;
    printf("Enter the ages of Ram, Shyam and Ajay: ");
    scanf("%d", &ram);
    scanf("%d", &shyam);
    scanf("%d", &ajay);
    if (ram < shyam)
    {
        if (ram < ajay)
        {
            printf("Ram is youngest\n");
        }
        else
        {
            printf("Ajay is youngest\n");
        }
    }
    else
    {
        if (shyam < ajay)
        {
            printf("Shyam is youngest\n");
        }
        else
        {
            printf("Ajay is youngest\n");
        }
    }
    return 0;
}