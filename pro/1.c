#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
  size_t maxlen = 0, len;
  int j;
  int long;
 for (j=1; j<argc;i++)
 {
   len = strlen(argv[j]);
     if (len > maxlen) 
       long = argv[j];
  }
 printf("longest string is %s. \n", long);
 return 0;
}
