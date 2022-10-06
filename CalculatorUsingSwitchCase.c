//calculator using switch case
#include<stdio.h>
int main(){
	//declaration of variables
	int firstNum,secondNum,choice;
	int sum,sub,mul,mod,div;
	while(1){
		
	//asking users choice
	printf("\n\nOperator to be performed");
	printf("\n1.Addition");
	printf("\n2.Subtraction");
	printf("\n3.Multiplication");
	printf("\n4.Division");
	printf("\n5.Exit");
	
	printf("\nEnter your choice: ");
	scanf("%d",&choice);
	
	//performing user asked operator
	switch(choice){
		case 1:
			
			printf("Enter first num: ");
			scanf("%d",&firstNum);
			printf("Enter second num: ");
			scanf("%d",&secondNum);
			sum=firstNum+secondNum;
			printf("The addition of two num is: %d ",sum);
			break;
		
		case 2:
			
			printf("\nEnter first num: ");
			scanf("%d",&firstNum);
			printf("Enter second num: ");
			scanf("%d",&secondNum);
			sub=firstNum-secondNum;
			printf("The subtration of two num is: %d ",sub);
			break;
			
		case 3:
			printf("\nEnter first num: ");
			scanf("%d",&firstNum);
			printf("Enter second num: ");
			scanf("%d",&secondNum);
			mul=firstNum*secondNum;
			printf("The multiplication of two num is:%d ",mul);
			break;
			
		case 4:
			
			printf("\nEnter first num: ");
			scanf("%d",&firstNum);
			printf("Enter second num: ");
			scanf("%d",&secondNum);
			mod=firstNum%secondNum;
			div=firstNum/secondNum;
			printf("\nThe division of number1 by number2 is:%d ",div);
			printf("\nThe remainder of the two num is: %d",mod);
			break;
	
		case 5:
			
			printf("Ending program");
			exit(0);
		
		default:
			printf("Invalid choice");
			
		}
}
	
}
