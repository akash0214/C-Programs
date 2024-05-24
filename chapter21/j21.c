#include <stdio.h>

#define _BV(bit) (1 << (bit))

void showbits(unsigned char n)
{
    for (int i = 7; i >= 0; i--)
    {
        unsigned char k = n & _BV(i);
        k == 0 ? printf("0") : printf("1");
    }
}

int main()
{
    unsigned char num;

    printf("Enter an unsigned 8-bit number: ");
    scanf("%hhu", &num);

    printf("Binary representation of %hhu: ", num);
    showbits(num);
    printf("\n");

    return 0;
}
