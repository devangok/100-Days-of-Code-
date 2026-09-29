#include <stdio.h>
#include <string.h>

int main() {
    char s1[200], s2[200];
    scanf("%s", s1);
    scanf("%s", s2);
    int count[26] = {0};
    for (int i = 0; s1[i] != '\0'; i++) count[s1[i] - 'a']++;
    for (int i = 0; s2[i] != '\0'; i++) count[s2[i] - 'a']--;
    int is_ana = 1;
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            is_ana = 0;
            break;
        }
    }
    if (is_ana) printf("Anagrams\n");
    else printf("Not anagrams\n");
    return 0;
}