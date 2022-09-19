//Swapping of two numbers
void main(){
	//declaration 
	int a,b;
	
	//input from user
	printf("Enter value of a: ");
	scanf("%d",&a);
	printf("Enter value of b: ");
	scanf("%d",&b);
	
	//swapping logic 
	int c=a;
	a=b;
	b=c;
	
	//output 
	printf("\nAfter Swapping\n");
	printf("Value of a is %d",a);
	printf("\nValue of b is %d",b);
	
	
}
