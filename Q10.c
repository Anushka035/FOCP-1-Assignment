#include<stdio.h>
int  main(){
   int n,count=0,i;
   printf("Enter the number of students:");
   scanf("%d",&n);
   int arr[n];
   for(i=0;i<n;i++){
    printf("Enter marks of student %d  ",i+1);
    scanf("%d",&arr[i]);
   }
   for(i=0;i<n;i++){
    if(arr[i]==99)
    count=count+1;
   }
   printf("The number of students having 99 marks are: %d",count);
    return 0;
}