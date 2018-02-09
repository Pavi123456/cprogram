#include <stdio.h>

int main(void)
{
	int i,v,count=0,a=1;
	printf("enter the num\n");
	scanf("%d",&v);
	while(v!=1)
	{
		v=v/2;
		count++;
	}
	for(i=0;i<=count;i++)
	{
		a=a*2;
	}
	printf("%d",a);
	return 0;
}
