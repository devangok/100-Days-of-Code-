#include <stdio.h>

int main() {
    float cp, sp;
    scanf("%f %f", &cp, &sp);
    if (sp > cp) {
        float profit_percent = ((sp - cp) / cp) * 100.0f;
        printf("Profit %.0f%%\n", profit_percent);
    } else if (cp > sp) {
        float loss_percent = ((cp - sp) / cp) * 100.0f;
        printf("Loss %.0f%%\n", loss_percent);
    } else {
        printf("No Profit No Loss\n");
    }
    return 0;
}