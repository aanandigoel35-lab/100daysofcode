#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    int i, j, len, max=0, freq[256];

    gets(s);
    len = strlen(s);

    for(i=0;i<len;i++) {
        for(j=0;j<256;j++) freq[j]=0;
        for(j=i;j<len;j++) {
            if(freq[s[j]] == 1) break;
            freq[s[j]] = 1;
            if(j-i+1 > max) max = j-i+1;
        }
    }

    printf("%d", max);
}
