#include<stdio.h> 

int main(){
    int x,y;
    printf("Enter The Coordinates");
    scanf("%d %d",&x,&y);

    if(x==0 && y==0){
        printf("Lies On Origin");

    }

    else if(y==0){
        printf("Lies On X-axis");
    }

    else if(x==0){
        printf("Lies On Y-axis");
    }

    else{
        printf("Does Not Lies On X and Y axis");
    }


    return 0;
}