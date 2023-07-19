#include <stdio.h>
int main() {
    int x = 3;
    int y = x * x;
    printf("%d = %d * %d", y, x, x);
    printf("%d * %d = %d", x, x, y);
    return 0;
}