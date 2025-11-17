#include<stdio.h>
int main()
{
	int i,n;
	unsigned long long int sum=0;
	printf("enter the max number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i; //adds onto itself on each iteration
	}
	printf("the sum of 1 to %d =%llu",n,sum); //displays the result
	return 0;
}
