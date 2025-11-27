#include <stdio.h>
int main(){
    int d,y;
    char mon[4];
    scanf("%d/%3[^/]/%d",&d,mon,&y);
    printf("%d-Apr-%d",d,y);
}
