#include<stdio.h>

int main(){
    int n;
    printf("Enter A Number");
    scanf("%d",&n);

    if(n%5==0 || n%3==0){
        printf("Divsible By 5 or 3");
    }
    else{
        printf("Not Divisble By 5 or 3");
    }



    return 0;
}