#include <stdio.h>
int main(){
    int a[100],n,largest,second;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);

    largest=second=-99999;

    for(int i=0;i<n;i++){
        if(a[i]>largest){
            second=largest;
            largest=a[i];
        }
        else if(a[i]>second && a[i]!=largest)
            second=a[i];
    }
    printf("Second Largest = %d", second);
}
