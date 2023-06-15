//WITH ARGUMENT WITH RETURN TYPE
#include<stdio.h>
int greater(int,int);

int main(){
	int a,b,c;
	printf("Enter two numbers separated by space: ");
	scanf("%d %d",&a,&b);
	c=greater(a,b);
	printf("Greater number from the two is:%d ",c);
}

int greater(int a, int b){
	if(a>b){
		return a;
	}
	return b;
}
