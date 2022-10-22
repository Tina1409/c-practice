#include<stdio.h>
int factorial ();

int main(){
	int s;
	s=factorial();
	printf("The factorial is: %d ",s);
}

int factorial(){
	int i,fact,n;
	printf("Enter the number: ");
	scanf("%d",&n);
	i=1;
	fact=1;
	while(i<=n){
		fact=fact*i;
		i=i+1;
	}
	return (fact);
}


