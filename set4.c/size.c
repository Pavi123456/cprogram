#include<stdio.h>
void main()
{
char a[10];
int c=0,i;
scanf("%s",&a);
for(i=0;a[i]!=NULL;i++)
{
if(a[i]==' ')
c++;
}
printf("%d",c);
}
