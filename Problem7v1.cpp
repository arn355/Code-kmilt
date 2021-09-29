#include<stdio.h>
int main(){
	char c[100];
	int count = 0;
	scanf("%s",&c);
	
	while(c[count] != '\0'){
		count++;
	}
	
	for(int i=count-1;i>=0;i--){
		printf("%c",c[i]);
	}
	
	return 0;
}
