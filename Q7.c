#include <stdio.h>

int main() {
    int n=5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", (j+1) % 2);
        }
        int pat = 2 * (n - i);
        for (int m = 1; m <= pat; m++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%d", (j+1) % 2);
        }

        printf("\n");
    }

    return 0;
}