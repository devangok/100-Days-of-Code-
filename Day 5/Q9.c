#include <stdio.h>
#include <math.h>

int main() {
    float p, r, t;
    scanf("%f %f %f", &p, &r, &t);
    float si = (p * r * t) / 100.0f;
    float ci = p * powf(1.0f + (r / 100.0f), t) - p;
    printf("Simple Interest=%.2f, Compound Interest=%.2f\n", si, ci);
    return 0;
}