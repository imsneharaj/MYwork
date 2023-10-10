#include <stdio.h>
int main()
{
   int i;
   int a;
   printf("enter till where u want to know the LEAP YEAR:");
   scanf("%d",&a);
   for(i=1;i<=a;i++)
   {
   if(i%4==0)
   {
      printf("\n%d",i) ;
   }
   }
    return 0;
}
