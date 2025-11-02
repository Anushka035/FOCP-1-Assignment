#include<stdio.h>
int main(){
    int n, i;
    int count = 0, flag;

    printf("Enter the no of elements: ");
    scanf("%d", &n);

    int a[n];
    for (i = 0; i < n; i++) {
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        flag = 0;

        for (int j = 2; j <= a[i] / 2; j++) {
            if (a[i] % j == 0) {
                flag = 1;
                break;
            }
        }

        if (flag == 0 && a[i] > 1) {
            count++;
            printf("Prime number in the array: %d\n", a[i]);
        }
    }

    printf("\nNo of prime numbers are: %d\n", count);

    return 0;
}