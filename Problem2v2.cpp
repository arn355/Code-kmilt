#include<stdio.h>
int main() {
    float num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    if(num1 >= num2 && num1 >= num3){
    	printf("%.2f is the largest number.", num1);
	}else if(num2 >= num1 && num2 >= num3){
		printf("%.2f is the largest number.", num2);
	}else{
		printf("%.2f is the largest number.", num3);
	}
        

    return 0;
}
