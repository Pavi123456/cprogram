#include <stdio.h>
#include<string.h>
int main()
{
  char a[10];
  int i,j,l,t=0;
  scanf("%[^/n]s",a);
  l=strlen(a);
  for(i=0;a[i]!='\0'&&i<l;i++)
  {
     for(j=i+1;a[j]!='\0'&&j<l;j++)
      {
     if(a[i]>a[j])
     {
         t=a[i];
         a[i]=a[j];
         a[j]=t;
     }
      }
  }
 
  printf("%s",a);
  return 0;
}
