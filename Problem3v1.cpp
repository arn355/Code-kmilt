#include<stdio.h>
int n,i,k;
int main(){
	printf("Enter number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(k=1;k<=n;k++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
