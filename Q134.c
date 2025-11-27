#include <stdio.h>
enum status {SUCCESS,FAILURE,TIMEOUT};

int main() {
    enum status s = SUCCESS;
    if(s==SUCCESS) puts("Success");
    else if(s==FAILURE) puts("Fail");
    else puts("Timeout");
}
