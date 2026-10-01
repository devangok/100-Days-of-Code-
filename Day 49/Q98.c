#include <stdio.h>
#include <string.h>

int main() {
    char words[10][50];
    int count = 0;
    while (scanf("%s", words[count]) == 1) {
        count++;
    }
    for (int i = 0; i < count - 1; i++) {
        printf("%c.", words[i][0]);
    }
    if (count > 0) {
        if (count > 1) printf(" ");
        printf("%s\n", words[count - 1]);
    }
    return 0;
}