
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
    if (a==b&&b!=c||b==c&&c!=a||c==a&&a!=b) // isoceles triangle means a triangle where only 2 sides are equal
    {
        printf("the given triangle is isoscelus");
    }
    else
    {
        printf("the given triangle is NOT isoscelus");
    }
   return 0;
}
