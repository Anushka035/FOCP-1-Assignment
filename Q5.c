#include <stdio.h>
int main()
{   int x,y;
    printf(" ENTER THE X coordinate: ");
    scanf("%d",&x);
    printf("\n ENTER THE Y coordinate:");
    scanf("%d",&y);
    if(x>0 && y>0)
    printf("1ST QUADRANT");
    else if(x<0 && y<0)
    printf("3RD QUADRANT");
    else if(x<0 && y>0)
    printf("2ND QUADRANT");
    else
    printf("4TH QUADRANT");
    return 0;

}