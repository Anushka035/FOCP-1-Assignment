#include<stdio.h>
int  main(){
    int n, i ;
    printf("enter the number of elemeents ");
    scanf("%d" , &n);
    int arr[n];

    for(i=0; i<n ; i++){
        printf("enter the value for %d ", i+1);
        scanf("%d"  , &arr[i]);
    }
    
    for(i=0; i<n ; i++){
    if(arr[i]==99){
        printf("99 first occured at %d " , 1+i);
        break;
    
    }}
    return 0;
}
