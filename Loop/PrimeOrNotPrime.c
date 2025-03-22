#include<stdio.h>

int main(){
    int n;
    printf("Enter A Number");
    scanf("%d",&n);
    int a=0;

    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            a=1;
            break;
        }
    }
    if(a==0) printf("The Number is prime \n");

    else printf("The Number is Composite \n");

    return 0;
}
