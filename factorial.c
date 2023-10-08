#include <stdio.h>
int main()
{
   int fact=1; int a;
printf("ENTER THE NO WHOSE FACTORIAL YOU WANT :");
scanf("%d",&a);
for(int i=fact;i<=a; i++)
{
    fact=fact*i;
}
printf("%d",fact);
return 0;
}
