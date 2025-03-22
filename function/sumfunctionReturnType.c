#include<stdio.h>

void sum(int x, int y){
    int sum= x+y;
    printf("the sum is %d",sum);
}

int main(){
    int a;
    printf("Enter first  Number");
    scanf("%d",&a);

    int b;
    printf("Enter second Number");
    scanf("%d",&b);

    sum(a,b);


    return 0;

}