#include<stdio.h>
int main(void)
{
	int n,i,c=0;
	printf("enter the number");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if((n%i)==0)
		{
			c++;
		}
	}
		if(c>0)
		{
			printf("composite");
		}
		else
		{
			printf("not composite");
		}
	return 0;
}
