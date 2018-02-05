#include<stdio.h>
int main()
{
	int v,j,count=0;
	scanf("%d",&v);
	while(a!=0)
	{
		j=v%10;
		count=count+j;
		v=v/10;
	}
	printf("%d",count);
	return 0;
}
