/*Write a C program to input the sides of a triangle and determine whether the triangle is isoceles or not.
Sample input=
1
1
1
output=
isosceles triangle.


Sample input=
2
3
4
output=
Not a isosceles triangle.

*/
#include<stdio.h>
int main ()
{
    int a,b,c;
    printf("enter the 1st side:");
    scanf("%d",&a);
    printf("enter the 2nd side:");
    scanf("%d",&b);
    printf("enter the 3rd side:");
    scanf("%d",&c);
    if (a==b||b==c||c==a)
    {
        printf("the given triangle is isoscelus");
    }
    else
    {
        printf("the given triangle is NOT isoscelus");
    }
   return 0;
}