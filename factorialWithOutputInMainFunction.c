//FACTORIAL
#include<stdio.h>
int main(){
	int n,asd=2;
	printf("Enter a number: ");
	scanf("%d",&n);
	s=factorial(asd);
	printf("The factorial is %d\n",s);
}
int factorial(int n){
	int i=1;
	int fact=1;
	while(i<=n){
		fact=fact*i;
		i++;
	}
	return fact;
	
}
