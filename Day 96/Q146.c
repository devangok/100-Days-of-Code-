#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date join_date;
};

int main() {
    struct Employee emp;
    scanf("%s %d %d %d %d", emp.name, &emp.id, &emp.join_date.day, &emp.join_date.month, &emp.join_date.year);
    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%d\n", emp.name, emp.id, emp.join_date.day, emp.join_date.month, emp.join_date.year);
    return 0;
}