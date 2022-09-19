#include<stdio.h>
int main(){
	//declaration
	long long int phoneNumber=0;
	long long int DateOfBirth=0;
	long long int username=0;
	int password=0;
	
	//taking input
	printf("Enter your Phone Number(XXXXX-XXXXX): ");
	scanf("%lld",&phoneNumber);
	printf("Enter your DOB (DDMMYY): ");
	scanf("%lld",&DateOfBirth);
	
	//logic for username
	long long int lastFourDigitOfPhoneNumber=(phoneNumber%((long long int)10000)); //remainder of phone number
	long long int LastTwoDigitOfDOB=DateOfBirth%100; //remainder of dob
	
	username=(LastTwoDigitOfDOB*10000)+lastFourDigitOfPhoneNumber; //main logic
	printf("\nStudent username is %lld",username);
	
	
	//logic for password
	long long int firstFourDigitOfPhoneNumber=(phoneNumber/((long long int)1000000));
	password=(firstFourDigitOfPhoneNumber*100)+LastTwoDigitOfDOB;
	printf("\nStudent password is %lld",password);
	return 0;
	
}
