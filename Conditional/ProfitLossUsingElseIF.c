#include<stdio.h>

int main(){
    int cp;
    printf("Enter Cost price");
    scanf("%d",&cp);

    int sp;
    printf("Enter Selling Price");
    scanf("%d",&sp);

    if(sp>cp){
        printf("Profit");
    }

    else if(sp<cp){
        printf("Loss");
    }

    else{
        printf("No Loss No Profit");
    }


    return 0;
}