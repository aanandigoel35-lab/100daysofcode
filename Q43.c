#include <stdio.h>
int fact(int n){ return n==0?1:n*fact(n-1); }

int main(){
    int n,r,sum=0,temp;
    scanf("%d",&n);
    temp=n;
    while(n){
        r=n%10;
        sum+=fact(r);
        n/=10;
    }
    if(sum==temp) printf("Strong Number");
    else printf("Not Strong");
}
