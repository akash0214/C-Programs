#include<stdio.h>

int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    int temp = num;
    int rev = 0;
    while(temp != 0){
        rev = rev*10 + (temp%10);
        temp /= 10;
    }
    if(rev == num){
        printf("Yes the reverse is same\n");
    }else{
        printf("No the reverse is not same\n");
    }
    return 0;
}