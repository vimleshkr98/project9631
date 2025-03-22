#include<stdio.h>

int min(int x,int y){
    if(x<y) return x;
    else return y;


}

int main(){
    int a;
    printf("Enter first  Number");
    scanf("%d",&a);

    int b;
    printf("Enter Second Number");
    scanf("%d",&b);


    int m =min(a,b);
    printf("Min of  %d and %d is %d",a,b,m);

                   


    return 0;
}