#include <stdio.h>

int main(void) {
	int v,d;
	char a[50]="quick",b[45]="leaner";
	v=strlen(a);
	d=strlen(b);
	if(v>d)
	{
		printf("%s",a);
	}
	else if(v<d)
	{
		printf("%s",b);
	}
	else
	{
		printf("%s",a);
	}
	return 0;
}
