#include<stdio.h>

void japan(){
    printf("you are in japanis \n");
}

void england(){
    printf("You are In Englandian \n");
    japan();
}
void India(){
    printf("You are Indian \n");
    england();
}

int main(){
    printf("You are a Man \n");
    India();
}