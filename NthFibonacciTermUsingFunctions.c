//printing nth fibonacci number using functions
#include<stdio.h>

int fibonacci(); //declaring function

int main(){
	int s;
	s=fibonacci();  //function call
	printf("%d",s);		
}

int fibonacci(){  //function definition
	int n,a,b,c,i;
	printf("Enter a number: ");
	scanf("%d",&n);
	a=0;
	b=1;
	i=3;
	if (n==1){
		return a;
	}
	else if (n==2){
		return b;
	}
	else{
		
			while(i<n){
				a=b;
				b=c;
				c=a+b;
				i=i+1;
			}
			
	return (c);
	
    }
    
}
