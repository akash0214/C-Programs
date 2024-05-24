#include <stdio.h>

int main()
{
    unsigned char num;

    printf("Enter an unsigned 8-bit number: ");
    scanf("%hhu", &num);

    unsigned char modified_num = num | 0xAA;

    printf("Original number: %hhu\n", num);
    printf("Number with odd bits set to 1: %hhu\n", modified_num);

    return 0;
}
