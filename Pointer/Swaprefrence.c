#include<stdio.h>

void swap(int *x, int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

    printf("%d %d",*x,*y);

}

int main(){
    int x;
    printf("Enter 1st Number");
    scanf("%d",&x);

    int y;
    printf("Enter 2nd Number");
    scanf("%d",&y);

    

    swap(&x,&y);
  

}