#include <stdio.h>
#include <string.h>

enum Role { ADMIN, USER, GUEST };

int main() {
    char role_str[20];
    scanf("%s", role_str);
    enum Role r;
    if (strcmp(role_str, "ADMIN") == 0) r = ADMIN;
    else if (strcmp(role_str, "USER") == 0) r = USER;
    else r = GUEST;

    switch (r) {
        case ADMIN: printf("Welcome Admin!\n"); break;
        case USER: printf("Welcome User!\n"); break;
        case GUEST: printf("Welcome Guest!\n"); break;
    }
    return 0;
}