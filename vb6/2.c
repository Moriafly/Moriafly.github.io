#include <stdio.h>
int main() {
    int sum = 0;
    float average = 0;
    for (int i = 0; i < 4; i++) {
        int x;
        scanf("%d", &x);
        sum += x;
    }
    printf("Sum = %d; Average = %.1f", sum, (float)sum / 4);
    return 0;
}