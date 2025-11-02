#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;  // Copy of original number
    int count = 0, rem, sum = 0;

    // Count number of digits
    while (temp > 0) {
        temp = temp / 10;
        count++;
    }
    printf("Number of digits: %d\n", count);

    // Reset temp to the original number
    temp = num;

    // Armstrong number check
    while (temp > 0) {
        rem = temp % 10;
        sum += pow(rem, count);
        temp = temp / 10;
    }

    printf("\nSum after calculation: %d\n", sum);

    if (sum == num)
        printf("%d is an Armstrong number\n", num);
    else
        printf("%d is NOT an Armstrong number\n",num);
        return 0;}