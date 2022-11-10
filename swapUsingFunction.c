//swap using function
#include<stdio.h>
void swap(int num1,int num2){
	int temp;
	temp=num1;
	num1=num2;
	num2=temp;
	printf("After swapping:\n");
	printf("num1 is %d\n",num1);
	printf("num2 is %d",num2);	
}

int main(){
	int num1,num2];
	printf("Enter first number: ");
	scanf("%d",&num1);
	printf("Enter second number: ");
	scanf("%d",&num2);
	swap(num1,num2);
}


