#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int a=0;
    int b=1;
    int sum=a+b;
    printf("Fibonacci series is: 0  1  ");
    for(i=0;i<=n;i++)
    {sum = a+b;
    a=b;
    b=sum;
    printf("%d  ",sum);}
    return 0;
}

