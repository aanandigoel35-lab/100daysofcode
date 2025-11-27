#include <stdio.h>
int main(){
    char s[100];
    int v=0,c=0;
    gets(s);

    for(int i=0;s[i];i++){
        if(strchr("aeiouAEIOU",s[i])) v++;
        else if(isalpha(s[i])) c++;
    }

    printf("Vowels=%d Consonants=%d",v,c);
}
