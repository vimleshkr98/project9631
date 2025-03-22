#include<stdio.h>
#include<math.h>

int fact(n){
    int f;
    for(int i=1;i<=n; i++){
        f*=i;

    }
    return f;
}

int ncr(int n,int r){
    return fact(n)/(fact(r)*fact(n-r));
}

int main(){
    int n;
    printf("Enter the Number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;i++){
            int x=ncr(i,j);
            printf("%d",x);
        }
        printf("\n");
    }
    return 0;
}