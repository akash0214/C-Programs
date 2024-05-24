#include <stdio.h>

int main()
{
    unsigned short int num;

    printf("Enter an unsigned 16-bit integer: ");
    scanf("%hu", &num);

    unsigned short int swapped_num = ((num >> 8) & 0x00FF) | ((num << 8) & 0xFF00);

    printf("Original number: %hu\n", num);
    printf("Number after swapping bytes: %hu\n", swapped_num);

    return 0;
}
