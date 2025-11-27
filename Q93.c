#include <stdio.h>
#include <string.h>
int main(){
    char a[100],b[100];
    int f[26]={0};
    gets(a); gets(b);

    if(strlen(a)!=strlen(b)){ printf("Not Anagram"); return 0; }

    for(int i=0;a[i];i++){
        f[a[i]-'a']++;
        f[b[i]-'a']--;
    }

    for(int i=0;i<26;i++)
        if(f[i]!=0){ printf("Not Anagram"); return 0;}

    printf("Anagram");
}
