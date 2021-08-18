#include<stdio.h>

float a,b;

void calculate(float num1,float num2){
	printf("Add : %f\n",num1+num2);
    printf("Subtract : %f\n",num1-num2);
    printf("Multiply : %f\n",num1*num2);
    printf("Divide : %f",num1/num2);
}

main(){
    printf("First number : ");
    scanf("%f",&a);
    printf("Second number : ");
    scanf("%f",&b);
    calculate(a,b);
    return 0;
}


