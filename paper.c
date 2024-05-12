#include <stdio.h>

int main() {
    int width_A0 = 1189, height_A0 = 841;
    int width = width_A0, height = height_A0;
    
    printf("A0: %dmm x %dmm\n", width, height);
    
    for (int i = 1; i <= 8; i++) {
        int temp = width;
        width = height;
        height = temp / 2;
        printf("A%d: %dmm x %dmm\n", i, width, height);
    }
    
    return 0;
}
