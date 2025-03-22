#include<stdio.h>

int main(){
    int m;
    printf("Enter Rows");
    scanf("%d",&m);

    int n;
    printf("Enter the Colum");
    scanf("%d",&n);

   
   
    for(int i=1;i<=m;i++){
        for(int i=1;i<=n;i++){
            printf("*");
        }
        printf("\n");
    }


}