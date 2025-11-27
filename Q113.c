#include <stdio.h>
int main() {
    int a[100], n, i, j, k, temp;

    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&k);

    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if(a[i] > a[j]) {
                temp = a[i]; a[i] = a[j]; a[j] = temp;
            }

    printf("%d", a[k-1]);
}
