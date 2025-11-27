#include <stdio.h>
int main() {
    int a[50], b[50], c[100], i=0,j=0,k=0, m,n;

    scanf("%d",&m);
    for(i=0;i<m;i++) scanf("%d",&a[i]);

    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&b[i]);

    i=j=0;
    while(i<m && j<n)
        c[k++] = (a[i]<b[j]) ? a[i++] : b[j++];

    while(i<m) c[k++] = a[i++];
    while(j<n) c[k++] = b[j++];

    for(i=0;i<k;i++) printf("%d ", c[i]);
}
