#include <stdio.h>

int main()
{
    unsigned char num;

    // Input 8-bit number
    printf("Enter an unsigned 8-bit number: ");
    scanf("%hhu", &num);

    unsigned char swapped_num = ((num & 0xF0) >> 4) | ((num & 0x0F) << 4);

    printf("Original number: %hhu\n", num);
    printf("Number after swapping nibbles: %hhu\n", swapped_num);

    return 0;
}
