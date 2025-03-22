#include<stdio.h>

int main(){
    int n;
    printf("Ente the Number");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            printf("*");
        }
        printf("\n");
    }


    return 0;
}