#include <stdio.h>

int main(void) {
	int v,j,i,a,b,n;
	printf("enter the number of line");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&v,&j);
		scanf("%d%d",&a,&b);
			printf("%d\n",(v/j));
			printf("%d\n",(a%b));
			
		}
	
	return 0;
}
