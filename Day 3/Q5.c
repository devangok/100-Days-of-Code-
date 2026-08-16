#include <stdio.h>

int main() {
    float c;
    scanf("%f", &c);
    float f = (c * 9.0f / 5.0f) + 32.0f;
    printf("Fahrenheit=%.0f\n", f);
    return 0;
}