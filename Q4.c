#include<stdio.h>
int main()
//Using arithmetic
{
    int a=8,b=5;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nswapped values are:\n");
    printf("a=%d b=%d",a,b);
    return 0;
}
//Using temporary variable
{
    int a=10,b=12;
    int num=a;
    a=b;
    b=num;
    printf("a=%d b=%d",a,b);
    return 0;
}
//Using bitwise XOR
{  int a=5,b=7;
    a=a^b;
    b=a^b;
    a=a^b;
    printf("Value of a after swapping;%d",a);
    printf("\nValue of b after swapping;%d",b);
    return 0;}


