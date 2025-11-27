#include <stdio.h>
#include <math.h>
int main(){
    int n,first,last,temp,d;
    scanf("%d",&n);
    last=n%10;
    d=log10(n);
    first=n/pow(10,d);
    temp=n-first*pow(10,d)-last;
    printf("%d",(last*pow(10,d)+temp*10+first));
}
