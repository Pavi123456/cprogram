#include <stdio.h>
void main()
{
	int v,sum=0,i,a;
	printf("enter the no.");
	scanf("%d",&v);
	for(i=1;i<=v;i++)
	{
		sum=sum+i;
	}
	a=sum/v;
	printf("avg is %d",a);
}
