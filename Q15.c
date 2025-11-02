#include<stdio.h>

int main(){
    int n,temp;
    printf("Enter the no of elements: ");
    scanf("%d",&n);
    int arr[n];
    for (int i =0;i<n;i++){
        printf("Enter the element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    temp=arr[n-1];
    for (int i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    printf("Array after rotation:");
    for (int i =0;i<n;i++){
        printf(" %d ",arr[i]);

    }
    return 0;
}