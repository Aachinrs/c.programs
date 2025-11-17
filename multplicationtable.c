#include<stdio.h>
int main ()
{
	int i=1,n;
	printf("enter your number");
	scanf("%d",&n);
	for(i=1;i<=10;i++) //prints until 10,change the value if you want to higher
	{
		printf("%d*%d=%d\n",n,i,n*i); //the multplication table
	}
	return 0;
}
