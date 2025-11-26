/* Write a program to read three integer values from the keyboard and display the 
 output stating that they are the sides of right-angled triangle.
Sample input=
5
6
5
Output=
Triangle is Not a Right Angle Triangle

 

*/
#include<stdio.h>
int main ()
{
    int a,b,c;
    printf("enter the length of the first side:");
    scanf("%d",&c);
    printf("enter the lenght of the second side:");
    scanf("%d",&a);
    printf("enter the length of the third side:");
    scanf("%d",&b);
    if((c*c)==(a*a)+(b*b)||(a*a)==(c*c)+(b*b)||(b*b)==(a*a)+(c*c))
    {
        printf("The given sides represent a right angled triangle");
    }
    else
    {
        printf("The given sides DONT represent a right angled triangle");
    }
    return 0;
}