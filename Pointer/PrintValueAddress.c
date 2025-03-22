#include<stdio.h>

int main(){
    int x=23;
    int* z=&x;

    printf("%d \n",x);
    printf("%p \n",z);
    printf("%p \n",&z);
    printf("%d",*z);


    return 0;
}