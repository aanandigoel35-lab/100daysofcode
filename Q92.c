#include <stdio.h>
int main(){
    char s[100]; int f[26]={0};
    gets(s);

    for(int i=0;s[i];i++){
        if(f[s[i]-'a']){ printf("%c",s[i]); return 0; }
        f[s[i]-'a']++;
    }
    printf("No repetition");
}
