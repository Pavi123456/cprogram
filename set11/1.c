#include <stdio.h>
#include<string.h>
int main(void) {
	char a[100];
	int len,i,n;
	printf("enter the string\n");
	scanf("%s",a);
	len=strlen(a);
	printf("enter the number\n");
	scanf("%d",&n);
	for(i=(len-n);i<=len;i++)
	{
		printf("%c",a[i]);
	}
	return 0;
}
