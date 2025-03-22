#include<stdio.h>

int main(){
    int x;
    printf("Enter X");
    scanf("%d",&x);

    int y;
    printf("Enter Y");
    scanf("%d",&y);

    int temp;
    temp=x;
    x=y;
    y=temp;

    printf("%d \n %d",x,y);



    return 0;
}