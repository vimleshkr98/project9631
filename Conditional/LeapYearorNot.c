#include<stdio.h>

int main(){
    int n;
    printf("Enter A Year");
    scanf("%d",&n);

    if(n%4==0 || n%400==0 && n%100!=0){
        printf("This Year Is Leap year");
    }

    else{
        printf("This Year is Not Leap Year");
    }


    return 0;
}