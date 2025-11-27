#include <stdio.h>
enum role {ADMIN,USER,GUEST};

int main() {
    enum role r = USER;
    if(r==ADMIN) puts("Admin Access");
    else if(r==USER) puts("User Access");
    else puts("Guest Access");
}
