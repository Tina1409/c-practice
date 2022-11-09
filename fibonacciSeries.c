//fibonacci series with output in function
#include<stdio.h>
int main(){
	int n;
	printf("Enter value of n: ");
	scanf("%d",&n);
	fibonacciSeries(n);
}

void fibonacciSeries(int n){
	int a=0,b=1,i=3,c;
	if (n==1){
		c=0;
	}
	else if(n==2){
		c=1;
	}
	else{
		while(i<=n){
			c=a+b; //why write c=a+b earlier??
			a=b;
			b=c;
			i++;
		}
	}
	printf("The nth term of fibonacci series is:%d",c);
	
}
