#include<stdio.h>
int main()
{
	int v,j,a;
	printf("enter the largest number");
	scanf("%d",&v);
	printf("enter the smallest number");
	scanf("%d",&j);
	printf("enter the number");
	scanf("%d",&a);
	if(a<v&&a>j)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
	}
