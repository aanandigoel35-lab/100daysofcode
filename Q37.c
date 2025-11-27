#include <stdio.h>
int main(){
    int a,b,x,y;
    scanf("%d%d",&a,&b);
    x=a; y=b;
    while(a!=b){
        if(a>b) a-=b;
        else b-=a;
    }
    printf("LCM = %d",(x*y)/a);
}
