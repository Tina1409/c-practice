//sum of n numbers  with output in function
#include<stdio.h>
int main(){
	int n,s;
	printf("Enter a number: ");
	scanf("%d",&n);
	s=sumOfnNumbers(n);
	printf("The sum of n numbers is %d ",s);
}

int sumOfnNumbers(int n){
	int i=0;
	int sum=0;
	while(i<=n){
		sum=sum+i;
		i++;
	}
	return sum;
}
