#include <stdio.h>
int main(){
    int a[100],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);

    for(int i=0;i<n;i++){
        int found=0;
        for(int j=i-1;j>=0;j--){
            if(a[j]>a[i]){
                printf("%d,",a[j]);
                found=1; break;
            }
        }
        if(!found) printf("-1,");
    }
}
