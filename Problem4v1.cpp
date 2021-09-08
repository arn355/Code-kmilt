#include<stdio.h>
int main(){
	float student[10],sum=0;
	for(int i=0;i<10;i++){
		printf("Student No.%d height : ",i+1);
		scanf("%f",&student[i]);
	}
	for(int i=0;i<10;i++){
		printf("Student No.%d height : ",i+1);
		printf("%.2f\n",student[i]);
	}
	for(int i=0;i<10;i++){
		sum += student[i];
	}
	printf("Average : %.2f",sum/10);
	return 0;
}
