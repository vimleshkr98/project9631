#include<stdio.h>

int main(){
    int n;
    printf("Enter A Number");
    scanf("%d",&n);

    if(n%5==0){
        printf("Divisible By 5");
    }

    else{
        printf("Not Divisble by 5");
    }
}