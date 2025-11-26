/*Write a C program to do simple calculations using switch
input=
Select the operation '+','-','*','/':+
Enter two numbers:4 5
Output=
Sum:9
*/
#include<stdio.h>
int main()
{
    int i,n1,n2;
    float result;
    printf("enter your first number:");
    scanf("%d",&n1);
    printf("enter your second number:");
    scanf("%d",&n2);
    printf("Select your operation \n 1)Addition \n 2)Subtraction\n3)Multiplication\n4)Divison\n");
    scanf("%d",&i);
    switch(i)
    {
    case 1:
    result=n1+n2;
    break;
    case 2:
    result=n1-n2;
    break;
    case 3:
    result=n1*n2;
    break;
    case 4:
    result=n1/n2;
    break;
    default:
    printf("invalid operation");
    }
    
    printf("the result is:%.2f",result);
    
}