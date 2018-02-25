#include <stdio.h>

int main(void) {
	int n,i,f=0;
	printf("enter the number");
	scanf("%d",&n);
	for(i=2;i<n/2;i++)
	{
		if(n%i==0)
		f++;
	}
		if(f==1)
		{
			printf("composite");
		}
		else
		{
			printf("not composite");
		}
	return 0;
}
