#include<stdio.h>
int main(void)
{
	int n,i;
	printf("enter the number");
	scanf("%d",&n);
	printf("the factor numbers are");
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("%d",i);
		}
	}
	return 0;
	
}
