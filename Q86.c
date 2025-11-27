#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    gets(s);

    int i=0,j=strlen(s)-1,flag=1;
    while(i<j){
        if(s[i]!=s[j]) flag=0;
        i++; j--;
    }

    if(flag) printf("Palindrome");
    else printf("Not Palindrome");
}
