#include<stdio.h>
int main(){
    int n,choice,i;
    printf("Enter the no of elements: ");
    scanf("%d",&n);
    int arr[50];
    for (int i =0;i<n;i++){
        printf("Enter the element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for (int i =0;i<n;i++){
        printf("\n%d",arr[i]);
    }
    int num;
    printf("\n Where do you want to insert the element?\n");
    printf("1. Front\n2. Middle\n3. End\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("Enter the element to insert: ");
    scanf("%d", &num);
    if (choice==1){
        for (int i=n;i>0;i--){
            arr[i]=arr[i-1];            
        }
        arr[0]=num;
        n++;
    }
    else if (choice==2){
        int p=n/2;
        for (int i=n;i>p;i--){
            arr[i]=arr[i-1];            
        }
        arr[p]=num;
        n++;
    }
    else if (choice==3){
        arr[n]=num;
        n++;  
    }
    for (int i =0;i<n;i++){
        printf("\n%d",arr[i]);
    }
    return 0;
}