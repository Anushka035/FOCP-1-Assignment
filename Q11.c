#include <stdio.h>
int main()
{
    int i ;
    int scores[5] = {10,11,12,13,14};
    int even_array[5];
    int odd_array[5];
    printf("The even array is: ");
    for (int i = 0; i < 5; i++)
    {
        if (scores[i] % 2 == 0)
        {
            even_array[i] = scores[i];
            printf("%d ", even_array[i]);
        }
    }
    printf("\nThe odd array is: ");
    for (int i = 0; i < 10; i++)
    {
        if (scores[i] % 2 != 0)
        {
            odd_array[i] = scores[i];
            printf("%d ", odd_array[i]);
        }
    }
    return 0;
}