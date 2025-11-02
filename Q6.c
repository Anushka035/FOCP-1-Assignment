
#include <stdio.h>
#include <math.h>

int main() {
    int choice,i,n; 
    printf("Enter your choice:\n");
    printf("1 Binary to Decimal\n");
    printf("2 Decimal to Binary\n");
    scanf("%d", &choice);

    if (choice == 1) {
        int long bin;
        printf("\nEnter a binary number;");
        scanf("%ld",&bin);
        long num=bin;
        int p=0,dec=0;
        int i=0,n;
        while(n!=0){
            int rem=n%10;
            dec +=rem* pow(2,p);
            n/=10;
            p++;
        }
        printf("Decimal number is %ld\n",bin);}

    else if(choice==2){
        int no;
        printf("Enter a Decimal number:");
        scanf("%d",&no);
        long bin=0;
        while(n!=0){
            int rem=n%2;
            bin+=rem*i;
            n/=2;
            i++;
        }
        printf("Binary number is :%d",bin);}
        else{
            printf("\nInvalid choice");
        }
        return 0;
    }