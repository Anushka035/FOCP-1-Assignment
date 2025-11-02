#include<stdio.h>
int  main(){
    int n;
    printf("enter the elements of array:");
    scanf("%d",&n);
    int max,min,i;
    int arr[n];
    for (i=0;i<n;i++){
        printf("Enter the element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for (int i=0;i<n;i++){
        if (arr[i]>max){
            max=arr[i];
        }
        else if (arr[i]<min){
            min=arr[i];
        }

    } 
    printf("Maximum element in the array is %d\n",max);
    printf("Minimum element in the array is %d\n",min);
    
    return 0;
}