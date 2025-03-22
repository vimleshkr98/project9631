#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter three Numbers");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b){
        if(a>c){
            printf("greater %d",a);
        }
        else{
            printf("gretaer %d",c);
        }


    }

    else{

        if(b>c){
            printf("greater %d",b);
        }

        else{
            printf("greater %d",c);
        }

    }



}