#include<stdio.h>

int main(){
    int n;
    printf("Enter A Digits");
    scanf("%d",&n);

    if(n>99 && n<1000){
        printf("The Three Digits Number");
    }

    else{
        printf("The Not Three Digits Number");
    }
}