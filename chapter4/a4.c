#include<stdio.h>

int main(){
    int a, b, c;
    printf("Enter the three sides of triangle: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if(a == b == c){
        printf("Equilateral triangle\n");
    }else if(a == b || b == c || a == c){
        printf("Isosceles triangle\n");
    }else if(a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b){
        printf("Right angled triangle\n");
    }else{
        printf("Scalene triangle\n");
    }
    return 0;
}