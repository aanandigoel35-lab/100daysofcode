#include <stdio.h>
int main() {
    int a[10][10],b[10][10],c[10][10],r,c1,k;
    scanf("%d%d",&r,&c1);

    for(int i=0;i<r;i++)
        for(int j=0;j<c1;j++) scanf("%d",&a[i][j]);

    for(int i=0;i<r;i++)
        for(int j=0;j<c1;j++) scanf("%d",&b[i][j]);

    for(int i=0;i<r;i++)
        for(int j=0;j<c1;j++){
            c[i][j] = 0;
            for(k=0;k<c1;k++)
                c[i][j] += a[i][k] * b[k][j];
        }

    for(int i=0;i<r;i++){
        for(int j=0;j<c1;j++) printf("%d ",c[i][j]);
        printf("\n");
    }
}
