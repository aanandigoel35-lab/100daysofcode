#include <stdio.h>
int main() {
    int n,b[10],i=0;
    scanf("%d",&n);
    while(n>0){ b[i++]=n%2; n/=2; }
    for(i=i-1;i>=0;i--) printf("%d",b[i]);
}
