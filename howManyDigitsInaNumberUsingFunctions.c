//how many digits in a number using function
#include<stdio.h>

int countDigits();

int main(){
	int s=countDigits();
	printf("%d",s);
}

int countDigits(){
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	int count =0;
	
	while(n!=0){
		n=n/10;
		count++;
	}
	return(count);
}

