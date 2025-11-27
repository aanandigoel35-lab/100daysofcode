#include <stdio.h>
int main(){
    int n,r,p=1;
    scanf("%d",&n);
    while(n){
        r=n%10;
        if(r%2!=0) p*=r;
        n/=10;
    }
    printf("%d",p);
}
