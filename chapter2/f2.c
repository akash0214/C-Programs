#include<stdio.h>

int main(){
    int c,d;
    printf("Enter C: ");
    scanf("%d", &c);
    printf("Enter D: ");
    scanf("%d", &d);
    c = c+d;
    d = c-d;
    c = c-d;
    printf("C: %d\n", c);
    printf("D: %d\n", d);
    return 0;
}