#include<stdio.h>

int main(){
    int n;
    printf("Enter The Number");
    scanf("%d",&n);

    int sum=0;
    int lastDigits=0;
    while(n!=0){
        lastDigits=n%10;
        sum= sum+lastDigits;
        n=n/10;
    }

    printf("The Sum of the Digits is %d",sum);



    return 0;
}