//swap with output in function
#include<stdio.h>
int main(){
	int num1,num2;
	printf("Enter first number: ");
	scanf("%d",&num1);
	printf("Enter second number: ");
	scanf("%d",&num2);
	swap(num1,num2);
	
}
void swap(num1,num2){
	int temp;
	temp=num1;
	num1=num2;
	num2=temp;
	printf("After swapping:\n");
	printf("first number is:%d \n",num1);
	printf("second number is:%d ",num2);
}
