#include<stdio.h>
int main ()
{
    int a,b,c;
    printf("enter the first integer a:");    //read all values
    scanf("%d",&a);
    printf("enter the second integer b:");
    scanf("%d",&b);
    printf("enter the third integer c:");
    scanf("%d",&c); 
    if (a>b)
    {
        if (a>c) 
        {
            printf("%d is the largest",a); //since a>b>c would mean a is largest 
        }
        else 
        {
            printf("%d is the largest",c); // c>c>b
        }
    }
    else
    {
        if (b>c)
        {
            printf("%d is the largest",b); //b>c>a
        }
        else
        {
            printf("%d is the largest",c); //c>b>a
        }
    }
}
