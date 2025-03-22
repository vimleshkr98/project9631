#include<stdio.h>

int main(){
    int l;
    printf("Enter Length");
    scanf("%d",&l);

    int b;
    printf("Enter Breath");
    scanf("%d",&b);
    int a=l*b;
    int p=2*(l+b);

    printf("%d \n %d",a,p);

    if(a>p){
        printf("Area Greater Than Perimeter");
    }

    else{
        printf("Perimeter Less than Area");
    }

    return 0;
}