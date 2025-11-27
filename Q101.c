#include <stdio.h>
int main(){
    int a[100],n,t,first=-1,last=-1;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&t);

    for(int i=0;i<n;i++)
        if(a[i]==t){
            if(first==-1) first=i;
            last=i;
        }

    printf("%d %d", first, last);
}
