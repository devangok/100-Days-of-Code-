#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    if (scanf("%s", s) == 1) {
        int n = strlen(s);
        int max_len = 0;
        for (int i = 0; i < n; i++) {
            int visited[256] = {0};
            for (int j = i; j < n; j++) {
                if (visited[(unsigned char)s[j]] == 1) break;
                visited[(unsigned char)s[j]] = 1;
                int len = j - i + 1;
                if (len > max_len) max_len = len;
            }
        }
        printf("%d\n", max_len);
    }
    return 0;
}