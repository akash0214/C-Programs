#include<stdio.h>

int main(){
    float a,b,c;
    printf("Enter the angles: ");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    if(a + b + c == 180){
        printf("A valid triangle!!\n");
    }else{
        printf("Not a valid triangle!!\n");
    }
    return 0;
}