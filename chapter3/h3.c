#include<stdio.h>

int main(){
    int x,y;
    printf("Enter x and y coordinates: ");
    scanf("%d", &x);
    scanf("%d", &y);
    if(x == 0 && y != 0){
        printf("Lies on y-axis\n");
    }else if(y == 0 && x != 0){
        printf("Lies on x-axis\n");
    }else if(x == 0 && y == 0){
        printf("Lies on origin\n");
    }
    return 0;
}