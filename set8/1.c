#include<stdio.h>
#include<string.h>
int main(void) 
{
char a[10],b[10];
int v;
printf("enter the string");
scanf("%s",&a);
strcpy(b,a);
strrev(a);
i=strcmp(a,b);
if(v==0)
{
	printf("palindrome");
}
else
{
	printf("not palindrome");
}
