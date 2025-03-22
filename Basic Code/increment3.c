#include<stdio.h>

int main(){
    int a=2;
    int b=a++;
    int c=3;
    int d=++c;

    printf("\n post  Increment=%d",b);
    printf("\n Pre increment=%d",d);



    return 0;
}