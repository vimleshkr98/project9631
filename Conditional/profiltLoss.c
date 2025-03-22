#include<stdio.h>

int main(){
    int cp;
    printf("Enter cost price");
    scanf("%d",&cp);

    int sp;
    printf("Enter Selling price");
    scanf("%d",&sp);

    if(sp>cp){
        printf("Profit");
    }

    else{
        printf("Loss");
    }

    if(cp=sp){
        printf("No loss No profit");
    }

    return 0;
}