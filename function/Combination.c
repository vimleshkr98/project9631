#include<stdio.h>
#include<math.h>
int fact(int n){
    int f = 1;
    for(int i=1;i<=n;i++){
        
        f*=i;
    }

    return f;

}

int ncr(int n, int r){
   return fact(n)/(fact(r)*fact(n-r));
}

int main(){
    int n;
    printf("Enter First Numbers");
    scanf("%d",&n);

    int r;
    printf("Enter Second Number");
    scanf("%d",&r);

    int ans=ncr(n,r);
    printf("%d",ans);

    return 0;
}