#include <stdio.h>

int main(void) {
	int n,i,a[10],c=0;
	printf("enter the limit");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		c=a[i]+c;
	}
	printf("%d",c);
	return 0;
}
