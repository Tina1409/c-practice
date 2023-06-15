#include<stdio.h>
int avg(int[],int);
int main(){
	int marks[5]={10,20,30,45,55},size,average=0;
	size=sizeof(marks)/sizeof(marks[0]);
	average=avg(marks,size);
	printf("The average is: %d",average);
}

int avg(int marks[], int a){
	int sum=0,average=0,i;
	for(i=0;i<a;i++){
		sum=sum+marks[i];
	}
	average=sum/a;
	return average;
}
