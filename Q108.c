#include <stdio.h>
int main() {
    int a[100], n, i;
    int prefix[100], suffix[100], ans[100];

    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);

    prefix[0] = 1;
    for(i=1;i<n;i++)
        prefix[i] = prefix[i-1] * a[i-1];

    suffix[n-1] = 1;
    for(i=n-2;i>=0;i--)
        suffix[i] = suffix[i+1] * a[i+1];

    for(i=0;i<n;i++) {
        ans[i] = prefix[i] * suffix[i];
        printf("%d ", ans[i]);
    }
}
