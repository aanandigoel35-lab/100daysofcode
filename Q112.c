#include <stdio.h>
int main() {
    int a[100], n, i;
    int maxEnd, maxSoFar;

    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);

    maxEnd = maxSoFar = a[0];

    for(i=1;i<n;i++) {
        if(a[i] > maxEnd + a[i])
            maxEnd = a[i];
        else
            maxEnd += a[i];

        if(maxEnd > maxSoFar)
            maxSoFar = maxEnd;
    }

    printf("%d", maxSoFar);
}
