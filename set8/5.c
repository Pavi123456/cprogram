#include<stdio.h>
int main()
{
	char a[100];
	int l,halflen,halflength,i;
	printf("enter the string");
	scanf("%s",&a);
	l=strlen(a);
		if(l%2!=0)
		{
			halflength=l/2;
			for(i=0;i<l;i++)
			{
				a[halflength]='*';
			}
		}
		else
		{
			halflength=l/2;
			halflen=halflength-1;
			for(i=0;i<l;i++)
			{
			a[halflength]='*';
			a[halflen]='*';
			}
		
		}
		printf("%s",a);
		return 0;
		
	}
	
