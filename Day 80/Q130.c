#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    int n;
    scanf("%d", &n);
    struct Student s[10];
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }
    FILE *fp = fopen("students.txt", "w");
    if (fp != NULL) {
        for (int i = 0; i < n; i++) {
            fprintf(fp, "%s %d %d\n", s[i].name, s[i].roll, s[i].marks);
        }
        fclose(fp);
    }
    fp = fopen("students.txt", "r");
    if (fp != NULL) {
        char name[50];
        int roll, marks;
        while (fscanf(fp, "%s %d %d", name, &roll, &marks) == 3) {
            printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
        }
        fclose(fp);
    }
    return 0;
}