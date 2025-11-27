#include <stdio.h>
int main(){
    int a[10][10],n;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    for(int s=0;s<n;s++)
        for(int i=0,j=s;i<=s;i++,j--)
            printf("%d ",a[i][j]);
}
