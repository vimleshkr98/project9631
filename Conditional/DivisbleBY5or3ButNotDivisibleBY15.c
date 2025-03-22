#include<stdio.h>

int main(){
    int x;
    printf("Enter A Number");
    scanf("%d",&x);

    if(x%5==0 || x%3==0){
        if(x%15!=0){
            printf("Divsible by 5 or 3 but Not divisble 15");
        }
        else{
            printf(" Not Divisible by 15");
        }
    }
    printf(" Not Divisble By 5 or 3 ");


    return 0;
}