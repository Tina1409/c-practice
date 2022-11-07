#include<stdio.h>
//declaring variables globally
int a,s,m,d,num1,num2,choice;

//function for output terminal screen
void outputTerminal(){
	printf("\t\t***Welcome to calculating service***\t\t");
	//asking users choice 
	printf("\nchoose the operation you want to perform:\n");
	printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit\n");
	printf("Enter your choice: ");
	scanf("%d",&choice);
}

//function for taking user input values
void userInputValue(){
	int num1,num2;
	printf("\nPlease enter the numbers\n");
	printf("Enter first number: ");
	scanf("%d",&num1);
	printf("Enter second number: ");
	scanf("%d",&num2);
}

//function for case1 
void case1(){
	int a;
	a=addition(num1,num2);
	printf("The addition of %d and %d is %d\n",num1,num2,a);
			
}

//function for case2
void case2(){
	int s;
	s=subtraction(num1,num2);
	printf("The subtraction of %d and %d is %d\n",num1,num2,s);
}

//function for case3
void case3(){
	int m;
	m=multiplication(num1,num2);
	printf("The multiplication of %d and %d is %d\n",num1,num2,m);
}

//function for case4
void case4(){
	int d;
	d=division(num1,num2);
	printf("The division of %d and %d is %d\n",num1,num2,d);
}

//function for addition
int addition(int num1,int num2){
	int add;
	add=num1+num2;
	return(add);
}

//function for subtraction
int subtraction(int num1,int num2){
	int sub;
	sub=num1-num2;
	return(sub);
}

//function for multiplication
int multiplication(int num1,int num2){
	int mul;
	mul=num1*num2;
	return(mul);
}

//function for division
int division(int num1,int num2){
	int div;	
	div=num1/num2;
	return(div);

}

//function for switch case
void switchCase(){
	switch(choice){
		case(1):
			userInputValue();
			case1();
			break;
		case(2):
			userInputValue();
			case2();
			break;
		case(3):
			userInputValue();
			case3();
			break;
		case(4):
			userInputValue();
			if(num2==0){
				printf("Divided by zero");
				break;
			}
			case4();
			break;
		case(5):
			printf("Ending program");
			exit(0);
		default:
			printf("Invalid choice\n");
		}	
}


int main(){
	while(1){
		outputTerminal();
		switchCase();
	}	
}
