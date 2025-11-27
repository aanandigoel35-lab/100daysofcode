#include <stdio.h>
int main(){
    int a[100],n,count=1,candidate;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);

    candidate=a[0];
    for(int i=1;i<n;i++){
        if(a[i]==candidate) count++;
        else count--;
        if(count==0){
            candidate=a[i];
            count=1;
        }
    }

    count=0;
    for(int i=0;i<n;i++)
        if(a[i]==candidate) count++;

    if(count > n/2) printf("%d",candidate);
    else printf("-1");
}
