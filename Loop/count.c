#include<stdio.h>

int main(){
    int n;
    printf("Enter The Numbers");
    scanf("%d",&n);

    int count=0;
    while(n!=0){
        n=n/10;
        count ++;
       
    }
    printf("The Number Of the Digits %d ",count);

   



    return 0;
}