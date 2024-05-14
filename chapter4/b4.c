#include <stdio.h>

void convertRGBtoCMYK(int red, int green, int blue) {
    double R = (double)red / 255.0;
    double G = (double)green / 255.0;
    double B = (double)blue / 255.0;
    
    double White = (R > G) ? ((R > B) ? R : B) : ((G > B) ? G : B);
    double Cyan = (White - R) / White;
    double Magenta = (White - G) / White;
    double Yellow = (White - B) / White;
    double Black = 1 - White;
    
    printf("CMYK values: Cyan=%.2f, Magenta=%.2f, Yellow=%.2f, Black=%.2f\n", Cyan, Magenta, Yellow, Black);
}

int main() {
    int red, green, blue;
    
    printf("Enter the RGB values (0-255): ");
    scanf("%d %d %d", &red, &green, &blue);
    
    if (red == 0 && green == 0 && blue == 0) {
        printf("CMYK values: Cyan=0.00, Magenta=0.00, Yellow=0.00, Black=1.00\n");
    } else {
        convertRGBtoCMYK(red, green, blue);
    }
    
    return 0;
}
