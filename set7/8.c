#include <stdio.h>

int main(void) {
	int v,j;
	printf("enter the number");
	scanf("%d",&v);
	for(j=v;j<v+10;j++)
	{
		if(j%10==0)
		{
			printf("%d",j);
		}
	}
	return 0;
}
