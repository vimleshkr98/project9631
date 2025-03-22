#include<stdio.h>

int main(){
    int n;
    printf("Enter The Number");
    scanf("%d",&n);

    //using ternary Operator
    n%2==0? printf("Even Number") :printf("Odd Number");

    return 0;
}