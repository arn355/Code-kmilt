#include<stdio.h>

int main(){
	int x,y;

	printf("Enter x and y : ");
	scanf("%d %d",&x,&y);
	x^=y; 
	y^=x; 
	x^=y;

	printf("x = %d and y = %d",x,y);
	
	return 0;
}
