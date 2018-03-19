#include<stdio.h>
int main(void)
{
	int a[10],b[10],i,j,c,d,s=0;
	scanf("%d%d",&c,&d);
	for(i=0;i<c;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<d;j++)
	{
		scanf("%d",&b[j]);
	}
	for(i=0;i<c;i++)
	{
		for(j=0;j<d;j++)
		{
			if(a[i]==b[j])
			{
				s++;
			}

		}
	}
	if(s==0)
	{
		printf("no");
	}
	if(s>0)
	{
		printf("yes");
	}
	return 0;
}
