/*Write a program to find the number of and sum of all integers greater than 100 and less than 200 that are divisible by 7.[
Sample output:
Numbers between 100 and 200, divisible by 7 : 
  105  112  119  126  133  140  147  154  161  168  175  182  189  196

The sum : 2107 


*/
#include<stdio.h>
int main ()
{
    int sum=0,n;
    printf("numbers between 100 and 200 divisible by 7 are\n");
    for(n=100;n<=200;n++)
    {
        if(n%7==0)
        {
        printf("%d\n",n);
        sum=sum+n;
        }
    }
    printf("their sum  is:%d",sum);
    return 0;
}