
#include<stdio.h>

int main(){
    int n,count,i,j,no;
    printf("Enter the no of elements: ");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        printf("Enter the element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nDuplicate elements in the array: ");
    for (int i=0;i<n;i++){
        int duplicate=0;
        for ( j=i+1;j<n;j++){
            if (arr[i]==arr[j]){
                duplicate=1;
                break;

            }

        }
        if (!duplicate){
            printf("\n%d",arr[i]);
    
        }
    }
    if (!no){
        printf("No duplicate elements(-1) ");
    }
    return 0;
}