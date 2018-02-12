#include<stdio.h>
#include<string.h>
void main()
{
char a[100];
int lenth,i;
printf("enter the string");
scanf("%s",&a);
length=strlen(a);
for(i=0;i<length;i++)
{
if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
{
printf("vowel");
}
else
{
printf("not vowel");
}}}
