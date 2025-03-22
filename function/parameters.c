#include<stdio.h>

void oddEven(int x){
    
    if(x%2==0){
        printf("%d even Number",x);

    }
    else{
        printf("%d odd Number",x);
    }

    return;
}

int main(){
    int a;
    printf("Enter A Numbers");
    scanf("%d",&a);

    oddEven(a);


    return 0;
}