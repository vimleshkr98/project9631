#include<stdio.h>

int main(){
    int n;
    printf("Enter The Numbers");
    scanf("%d",&n);

    int sum=0;
    int even=0;
    while(n!=0){
        if(n%2==0){
            even=n%10;
            sum=sum+even;
            n=n/10;
        }
         printf("The Sum of The Value is %d",sum);


       
    }
   

    return 0;
}