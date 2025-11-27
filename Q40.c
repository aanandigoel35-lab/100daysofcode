#include <stdio.h>
int main() {
    int n,r;
    scanf("%d",&n);
    while(n){
        r=n%10;
        printf("%d", r==0?1:0);
        n/=10;
    }
}
