#include <stdio.h>
void main()
{
int i,j,v,t,a[10];
scanf("%d\n",&v);
for(i=0;i<v;i++)
{
 scanf("%d",&a[i]);
 
}
for(i=0;i<v;i++)
{
	for(j=i+1;j<v;j++)
	{
		if(a[i]>a[j])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
}
printf("%d\n",a[0]);
{
	printf("%d\n",a[i]);
  }
}
