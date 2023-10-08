#include <stdio.h>
int main()
{
    int i,j,k;

    printf ("enter the no of rows you want your star to be printed in:");
    scanf ("%d",&k);
    for(i=k;i>=1;i--)
    {
        for(j=1;j<=i;j++)
    {
        printf("*");
    }
     printf("\n");
    }
    return 0;
}
