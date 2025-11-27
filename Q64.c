#include <stdio.h>
int main() {
    int n,count[10]={0},r,max=0,digit;
    scanf("%d",&n);

    while(n){
        count[n%10]++;
        n/=10;
    }

    for(int i=0;i<10;i++){
        if(count[i]>max){
            max=count[i];
            digit=i;
        }
    }
    printf("Most frequent digit = %d", digit);
}
