#include <stdio.h>
#include <string.h>
int main()
{
   char c[100];
   scanf("%s",&c);
   strrev(c);
   printf("%s",c);

   return 0;
}
