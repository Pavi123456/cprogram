clude <stdio.h>

int main(void) {
int i,n,a,b,v;
printf("enter the no of lines:\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	scanf("%d%d",&a,&b);
    v=b-a;
    printf("%d\n",v);
	
}
	return 0;
}
