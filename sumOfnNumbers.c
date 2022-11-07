//sum of n numbers  with output in function
#include<stdio.h>
int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	sumOfnNumbers(n);
}

void sumOfnNumbers(int n){
	int i=0;
	int sum=0;
	while(i<n){
		sum=sum+i;
		i++;
	}
	printf("the sum of n numbers is: %d",sum);
}
