#include<stdio.h>
int main()
{   int num1,num2;
    printf("ENTER THE 1ST NUMBER:");
    scanf("%d",&num1);
     printf("ENTER THE 2nd NUMBER:");
     scanf("%d",&num2);
     int result = num1+(~num2+1);
     printf("the result of subtraction of both the numbers are %d",result);
     return 0;
}
