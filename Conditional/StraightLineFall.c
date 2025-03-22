#include<stdio.h>

int main(){
    int x1;
    printf("Enter X1");
    scanf("%d",&x1);

    int y1;
    printf("Enter y1");
    scanf("%d",&y1);

    int x2;
    printf("Enter X2");
    scanf("%d",&x2);

    int y2;
    printf("Enter y2");
    scanf("%d",&y2);

    int x3;
    printf("Enter X3");
    scanf("%d",&x3);

    int y3;
    printf("Enter Y3");
    scanf("%d",&y3);

    int m1=y2-y1/x2-x1;
    int m2=y3-y2/x3-x2;

    printf("%d %d",m1,m2);

    if(m1=m2){
        printf("Lies On Straight Line");
    }

    else{
        printf("Does Not LIes On Straight Line");
    }


    return 0;
}