#include<stdio.h>

int main(){
    int a,b,min;
    printf("Enter 1st Number");
    scanf("%d",&a);

    printf("Enter 2nd Number");
    scanf("%d",&b);

    min=(a<b)?a:b;
    printf(" min value=%d",min);


    return 0;
}