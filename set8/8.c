#include<stdio.h>
int main()
{
	int n;
	printf("enter the value");
	scanf("%d",&n);
	if(n%13==0)
	{
		printf("multiples of 13");
	}
	else
	{
		printf("not multiples of 13");
	}
	return 0;
}
