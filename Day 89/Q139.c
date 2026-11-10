#include <stdio.h>

enum State { SUCCESS = 0, FAILURE = 1, TIMEOUT = 2 };

int main() {
    printf("SUCCESS=%d, FAILURE=%d, TIMEOUT=%d\n", SUCCESS, FAILURE, TIMEOUT);
    return 0;
}