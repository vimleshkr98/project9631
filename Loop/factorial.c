#include<stdio.h>

int main(){
    int n,fact=1;
    printf("Enter A Number");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("factorial of %dis %d",n,fact);

}