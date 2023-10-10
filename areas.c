#include <stdio.h>
int areaofcircle(int radius )
{
    return 3.14*radius*radius;
}
int areaofsquare(int side )
{
    return side*side;
}
int areaofrectangle(int side1, int side2 )
{
    return side1*side2;
}
int areaoftriangle(int base, int height )
{
    return 0.5*base*height;
}


int main() {
    int r,s,s1,s2,b,h;
    printf("radius of the circle:\n");
    scanf("%d",&r);
    printf("area of circle:%d\n",areaofcircle(r));

        printf("side of the square:\n");
    scanf("%d",&s);
    printf("area of square:%d\n",areaofsquare(s));


        printf("side of the triangle:\n");
    scanf("%d %d",&b,&h);
    printf("area of triangle:%d\n",areaoftriangle(b,h));

     printf("side of the rectangle:\n");
    scanf("%d %d",&s1,&s2);
    printf("area of rectangle:%d\n",areaofrectangle(s1,s2));

    return 0;
}
