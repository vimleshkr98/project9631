#include<stdio.h>

void swap(int a, int b ){
    a=a+b;
    b=a-b;
    a=a-b;

    printf("%d %d",a,b);
}

int main(){
    int x;
    printf("Enter First Number");
    scanf("%d",&x);

    int y;
    printf("Enter Second Number");
    scanf("%d",&y);


   swap(x,y);
    return 0;

}