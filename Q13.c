#include <stdio.h>
int main()
{   int n;
    int p=1;
    printf("enter the number of elements \n");
    scanf("%d",&n);
    int arr[n];
   
    for (int i=0;i<n;i++){
        printf("enter the elements %d ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("\nPeak elements: ");
    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    return 0;
}