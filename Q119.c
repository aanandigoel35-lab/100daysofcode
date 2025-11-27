#include <stdio.h>
int main() {
    int a[100], n, i, temp;

    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);

    for(i=0;i<n;i++) {
        if(a[abs(a[i])] < 0) {
            printf("%d", abs(a[i]));
            return 0;
        }
        a[abs(a[i])] *= -1;
    }
}
