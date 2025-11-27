#include <stdio.h>
int main(){
    int n,sum;
    scanf("%d",&n);
    sum = n*(n+1)/2;

    int left=0;
    for(int x=1;x<=n;x++){
        left += x;
        if(left == sum-left+x){
            printf("%d",x);
            return 0;
        }
    }
    printf("-1");
}
