#include <stdio.h>
#include <stdbool.h>

int main()
{
    unsigned char num;

    printf("Enter an 8-bit number: ");
    scanf("%hhu", &num);

    bool is_bit_3_on = (num & (1 << 3)) != 0;
    bool is_bit_6_on = (num & (1 << 6)) != 0;
    bool is_bit_7_on = (num & (1 << 7)) != 0;

    if (is_bit_3_on && is_bit_6_on && is_bit_7_on)
    {
        printf("The 3rd, 6th, and 7th bits are ON in the number %hhu.\n", num);
    }
    else
    {
        printf("The 3rd, 6th, and 7th bits are NOT all ON in the number %hhu.\n", num);
    }

    return 0;
}
