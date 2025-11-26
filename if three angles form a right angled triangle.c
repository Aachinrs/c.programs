#include<stdio.h>
int main ()
{
    int a,b,c;
    printf("enter the length of the first side:"); //read the values of the angles
    scanf("%d",&c);
    printf("enter the lenght of the second side:");
    scanf("%d",&a);
    printf("enter the length of the third side:");
    scanf("%d",&b);
    if((c*c)==(a*a)+(b*b)||(a*a)==(c*c)+(b*b)||(b*b)==(a*a)+(c*c)) //the formula of right angled triangle (a^2=b^2+c^2 where a,b,c are the sides) is being used to check  
    {
        printf("The given sides represent a right angled triangle");
    }
    else
    {
        printf("The given sides DONT represent a right angled triangle");
    }
    return 0;
}
