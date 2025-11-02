#include<stdio.h>
int main(){
    int n,choice,i;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[500];
    for ( i =0;i<n;i++){
        printf("Enter the element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for (i =0;i<n;i++){
        printf("\n%d",arr[i]);
    }
    printf("\nDeletion of element\n");
    printf("1. Front\n2. Middle\n3. End\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice==1){
        for (i=0;i<n-1;i++){
            arr[i]=arr[i+1];            
        }
        n--;
    }
    else if (choice==2){
        int mid=n/2;
        for ( i=mid;i<n-1;i++){
            arr[i]=arr[i+1];            
        }
        n--;
    }
    else if (choice==3){
        n--;  
    
    for ( i =0;i<n;i++){
        printf("\n%d",arr[i]);
    }}
    else{
        printf("Invalid choice\n");
    }
    printf("Array after deletion: ");
    for(i=0;i<n;i++) {
        printf(" %d ",arr[i]);
    }
    return 0;
}