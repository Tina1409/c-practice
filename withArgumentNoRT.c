//WITH ARGUMENT NO RETURN TYPE
#include<stdio.h>
void sum(int);
int main(){
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	sum(num);
}
void sum(int a){
	if (a%2==0){
		printf("Number is even");
	}
	else{
		printf("Number is odd");
	}
}
