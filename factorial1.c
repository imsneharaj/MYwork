#include <stdio.h>
int factorial(int num)
{
    if(num==0||num==1)
    {
        return 1;
    }
else
{
    return num*factorial(num-1);
}
}
int main()
{
    int a;
    printf("enter the no whose factorial u want:");
    scanf("%d",&a);
    printf("factorial of the %d is %d",a,factorial(a));
    return 0;
}
