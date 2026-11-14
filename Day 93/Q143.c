#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    int n;
    scanf("%d", &n);
    struct Student s[20];
    int top_idx = 0;
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d", s[i].name, &s[i].roll_no, &s[i].marks);
        if (s[i].marks > s[top_idx].marks) {
            top_idx = i;
        }
    }
    printf("Topper: %s (Marks: %d)\n", s[top_idx].name, s[top_idx].marks);
    return 0;
}