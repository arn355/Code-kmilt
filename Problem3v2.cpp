#include<stdio.h>
int n,i,c=1;
int main(){
	printf("Enter number : ");
	scanf("%d",&n);
	while(c<=n){
		for(i=1;i<=n;i++){
			printf("*");
		}
		printf("\n");
		c++;
	}
	return 0;
}
