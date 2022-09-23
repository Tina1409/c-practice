//Palindrome numbers between a to n
#include<stdio.h>
void main(){
	//declaraing variables
	int start,stop,num,temp,ans;
	
	//taking input
	printf("Enter the lower limit:");
	scanf("%d",&start);
	printf("Enter the upper limit:");
	scanf("%d",&stop);
	
	printf("Palindrome num between %d to %d are:\n",start,stop);
	
	//logic part
	for(num=start;num<=stop;num++){
		temp=num;
		ans=0;
		
		//logic behind output
		while(temp){
			int digit=temp%10;
			ans=(ans*10)+digit;
			temp=temp/10;
			
			//output we want
			if(num==ans)
				printf("%d \n",num);
		}
	}
}
