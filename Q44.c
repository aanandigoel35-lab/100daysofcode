#include <stdio.h>
int main(){
    int n,i;
    float sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum += (2*i-1)/(float)(2*i);
    printf("%f",sum);
}
