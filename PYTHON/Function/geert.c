#include<stdio.h>

void sum(int x,int y){
    
    
     int sum=x+y;
    printf("%d",sum);
}

int main(){
    int a;
    printf("Enter a Number");
    scanf("%d",&a);

    int b;
    printf("Enter Second Nuber");
    scanf("%d",&b);
    sum(a,b);
}