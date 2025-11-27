#include <stdio.h>
int main(){
    char s[100];
    gets(s);

    for(int i=0;s[i];i++)
        if(!strchr("aeiouAEIOU",s[i]))
            printf("%c",s[i]);
}
