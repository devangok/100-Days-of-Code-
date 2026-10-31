#include <stdio.h>

int main() {
    FILE *fp = fopen("numbers.txt", "r");
    if (fp != NULL) {
        int val, sum = 0, count = 0;
        while (fscanf(fp, "%d", &val) == 1) {
            sum += val;
            count++;
        }
        fclose(fp);
        float avg = (count > 0) ? (float)sum / count : 0.0f;
        printf("Sum = %d\nAverage = %.2f\n", sum, avg);
    }
    return 0;
}