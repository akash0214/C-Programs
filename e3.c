#include<stdio.h>

int main(){
    int l,b;
    printf("Enter the length: ");
    scanf("%d", &l);
    printf("Enter the breadth: ");
    scanf("%d", &b);
    if((l*b) > 2*(l+b)){
        printf("Area is greater\n");
    }else{
        printf("Perimeter is greater\n");
    }
    return 0;
}