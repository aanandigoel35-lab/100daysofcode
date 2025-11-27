#include <stdio.h>
int main(){
    int n,i,f=0;
    scanf("%d",&n);
    for(i=2;i<n;i++) if(n%i==0) f=1;
    if(f==0) printf("Prime");
    else printf("Not Prime");
}
