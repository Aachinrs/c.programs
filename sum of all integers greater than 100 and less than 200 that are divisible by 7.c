#include<stdio.h>
int main ()
{
    int sum=0,n;
    printf("numbers between 100 and 200 divisible by 7 are\n");
    for(n=100;n<=200;n++) //will go through the numbers 1 by 1
    {
        if(n%7==0) //numbers divisible by 7 will get selected
        {
        printf("%d\n",n); 
        sum=sum+n; // adds the numbers to itself after every iteration
        }
    }
    printf("their sum  is:%d",sum); 
    return 0;
}
