#include<stdio.h>

int main(){
    int x=6;
    int* z1=&x;

    int y=6;
    int* z2=&y;
    

    printf("\n");
    printf("%p \n",&z1);

    printf("%p",&z2);

} 