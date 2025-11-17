#include<stdio.h>
int main()
{
	int i=99;
	for(i=99;i>=3;i-=12)
	{
		printf("%d",i); //prints the number
	    if(i>3)
	    {
	    	printf(","); //prints the comma after the number
		}
	}
	return 0;
}
