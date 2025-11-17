#include<stdio.h>
int main()
{
	int n,i=1;
	unsigned long long int factorial=1; //so we can go higher than 12!
	printf("enter a number:");
	scanf("%d",&n);
	if (n<0)
	{
		printf("factorial doesnt apply for negative numbers"); //factorial doesnt exist for negatives
	}
	else
	{
		for(i=1;i<=n;i++)
		{
			factorial*=i; //multiplies itself in each iteration
		}
	}
	printf("factorial of %d=%llu",n,factorial); //to showcase the result
	return 0;
}
