#include<stdio.h>

int main(){
    int a;
    printf("Enter A Number");
    scanf("%d",&a);

    if(a>90 && a<100){
        printf("Exceelent");
    }
    else if(a>80 && a<90){
        printf("Very Good");
    }

    else{
        printf("Good");
    }

    

    return 0;
}