#include <stdio.h>

int main()
{
    unsigned char num;

    printf("Enter an unsigned 8-bit number: ");
    scanf("%hhu", &num);

    if (!(num & (1 << 2)) && !(num & (1 << 4)))
    {
        num |= (1 << 2);
        num |= (1 << 4);
        printf("Bits 3 and 5 were OFF. They have been turned ON.\n");
    }
    else
    {
        printf("Bits 3 and/or 5 were not both OFF.\n");
    }

    printf("Modified number: %hhu\n", num);

    return 0;
}
