#include <stdio.h>
 #include <math.h>
 int main()
{   int num1,num2;
    printf("ENTER 1st NUMBER:");
    scanf("%d",&num1);
    printf("ENTER 2nd NUMBER:");
    scanf("%d",&num2);
    int i,hcf;
    for(i=1;i<=num1 && i<=num2;i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            hcf =i;
        }
    }
    printf("the hcf of %d and %d is %d",num1,num2,hcf);
return 0;
}