#include<stdio.h>

int main(){
    int a,b,max;
    printf("Enter Two Numers");
    scanf("%d %d",&a,&b);

    max=(a>b)?a:b;
    printf("Max=%d",max);

    return 0;
}