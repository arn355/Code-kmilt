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
	if(n==0){
		return 1;
	}else{
		return n*fact(n-1);
	}
}
