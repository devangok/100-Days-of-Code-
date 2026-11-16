#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

struct Student findTopStudent(struct Student s[], int n) {
    int top = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[top].marks) {
            top = i;
        }
    }
    return s[top];
}

int main() {
    int n;
    scanf("%d", &n);
    struct Student s[20];
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d", s[i].name, &s[i].roll_no, &s[i].marks);
    }
    struct Student top = findTopStudent(s, n);
    printf("Top Student: %s | Roll: %d | Marks: %d\n", top.name, top.roll_no, top.marks);
    return 0;
}