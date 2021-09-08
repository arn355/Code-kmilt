#include<stdio.h>

float student[10]={0,0,0,0,0,0,0,0,0,0};
float sum=0,n,mean;

int average(){
	for(int i=0;i<10;i++){
		sum += student[i];		
	}
	return sum/10;
}

int main(){	
	for(int i=0;i<10;i++){
		printf("Student No.%d height : ",i+1);
		scanf("%f",&n);
		student[i] = n;
	}
	for(int i=0;i<10;i++){
		printf("Student No.%d height : ",i+1);
		printf("%.2f\n",student[i]);
	}
	
	mean = average();
	printf("Average : %.2f",mean);
	return 0;
}
