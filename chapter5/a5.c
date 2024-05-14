#include <stdio.h>

int main() {
    int ascii_value = 0;

    printf("ASCII Values and Equivalent Characters:\n");
    
    while (ascii_value <= 255) {
        printf("ASCII Value: %d, Character: %c\n", ascii_value, ascii_value);
        ascii_value++;
    }
    
    return 0;
}
