#include <stdio.h>

int main() {
    float r;
    scanf("%f", &r);
    float area = 3.14159f * r * r;
    float circumference = 2 * 3.14159f * r;
    printf("Area=%.2f, Circumference=%.2f\n", area, circumference);
    return 0;
}