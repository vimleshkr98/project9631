#include<stdio.h>

int main(){
    int Ram;
    printf("Enter First Number");
    scanf("%d",&Ram);

    int Shyam;
    printf("Enter 2nd Number");
    scanf("%d",&Shyam);

    int Ajay;
    printf("Enter 3rd Number");
    scanf("%d",&Ajay);

    if(Ram<Shyam){
        if(Ram<Ajay){
            printf("The Youngest Of Ram%d",Ram);
        }
        else{
            printf("The Youngest of Ajay%d ",Ajay);
        }
    }
    else{
        if(Shyam<Ajay){
            printf("The Youngest Of Shyam %d",Shyam);
        }
        else{
            printf("%The Youngest Of Ajay %d ",Ajay);
        }
    }


    return 0;
}