#include<stdio.h>

int main(){
    int a;
    printf("Enter A Number");
    scanf("%d",&a);

    if(a%5==0){
        if(a%3==0){
            printf("Divisble by 5 or 3");
        }

        else{
            printf("Not Divisble By 5 or 3");
        }

    }
    else{
        printf("Not Divisble By 5 or 3");

    }
}