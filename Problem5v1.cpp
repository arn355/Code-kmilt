#include <stdio.h>
int fact(int);
 
int main(){
 int num,fac;
 
  	printf("Enter number : ");
  	scanf("%d",&num);
  	fac=fact(num);
    printf("Factorial of %d = %d",num,fac);
    return 0;
}
 
int fact(int n)
{
    int i,sum=1;
    for(i=1;i<=n;i++)
    {
        sum=sum*i;
    }
    return sum;
}
