#include<stdio.h>

int main(){
    int a;
    printf("Enter A Number");
    scanf("%d",&a);

    int b;
    printf("Enter b Number");
    scanf("%d",&b);

    int c;
    printf("Enter c Number");
    scanf("%d",&c);

    if(a>b && a>c){
        printf("greater Than a");
    }

    if(b>c && b>a){
        printf("greater Than b");
    }

    if(c>a && c>b){
        printf("greater Than c");
    }


    return 0;
}