#include <stdio.h>
#include <ctype.h>
int main() {
    char s[100];
    gets(s);

    s[0] = toupper(s[0]);
    for(int i=1;s[i];i++)
        if(s[i-1]=='.' || s[i-1]==' ')
            s[i] = toupper(s[i]);

    puts(s);
}
