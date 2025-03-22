#include<stdio.h>
#include<math.h>

int fact(int n){
    int f;
    for(int i=1; i<=n; i++){
        f*=i;
    }

    return f;

}

int npr(int n, int r){
    return fact(n)/fact(n-r);
}

int main(){
    int n;
    printf("Enter First Number");
    scanf("%d",&n);

    int r;
    printf("Enter Second Number");
    scanf("%d",&r);

    int ans=npr(n,r);
    printf("%d",ans);
    

    return 0;
}