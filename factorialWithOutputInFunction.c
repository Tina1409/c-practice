//factorial with output in function
#include<stdio.h>
int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	factorial(n);
}
void factorial(int n){
	int i=1;
	int fact=1;
	while(i<=n){
		fact=fact*i;
		i++;
	}
	printf("The factorial of n is %d",fact);
	
}
