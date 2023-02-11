#include<stdio.h>
#include<string.h>
int main(){
	int lengthOfString,i;
	printf("Enter the length of string: ");
	scanf("%d",&lengthOfString);
	int len1,len2;
	char fname[lengthOfString],lname[lengthOfString];
	printf("Enter your first name:\n ");
	gets(fname);
	printf("Enter your last name: ");
	gets(lname);
	len1=strlen(fname);
	len2=strlen(lname);
	
	printf("%d %d",len1,len2);
	
}
