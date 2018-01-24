#include <stdio.h>
#include<conio.h>
main()
{
char str[10];
int v=0;c=0;
printf("enter the string\n");
while(str[v]!='\0')
{
if(str[v]=='')
c++;
v++;
}
printf("number of words in the string %d\n",c+1);
}
