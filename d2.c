#include<stdio.h>
#include<math.h>
int main(){
    float t, v, wcf;
    printf("Enter the temperature: ");
    scanf("%f", &t);
    printf("Enter the velocity: ");
    scanf("%f", &v);
    wcf = 35.74 + (0.625 * t) + ((0.4275 * t) - 35.75)*(pow(v,0.16));
    printf("wcf: %f", wcf);
    return 0;
}