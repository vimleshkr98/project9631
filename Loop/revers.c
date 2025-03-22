#include<stdio.h>

int main(){
    int n;
    printf("Enter The Numbers");
    scanf("%d",&n);

    int r=0;
    while(n!=0){
        r=r*10;
        r=r+(n%10);
        n=n/10;
    }

    printf("\n The Reverse Number is %d",r);
}