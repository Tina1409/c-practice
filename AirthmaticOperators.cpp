//performing airthmatic operators 
#include<iostream>
using namespace std;
int main(){
	//declaration of variables
	int a,b;
	int sum,sub;
	float mul;
	float modulo,quotient;
	
	//taking user input
	cout<<"Enter first number: "<<endl;
	cin>>a;
	cout<<"Enter second number: "<<endl;
	cin>>b;
	
	//performing operations
	sum =a+b;
	sub=a-b;
	mul=a*b;
	modulo=a%b;
	quotient=a/b;
	
	//displaying output
	cout<<"The addition of "<<a<<"and"<<b<<"is"<<sum<<endl;
	cout<<"The subtraction of "<<a<<"and"<<b<<"is"<<sub<<endl;
	cout<<"The multiplication of "<<a<<"and"<<b<<"is"<<mul<<endl;
	cout<<"The modulo of "<<a<<"and"<<b<<"is"<<modulo<<endl;
	cout<<"The quotient of "<<a<<"and"<<b<<"is"<<quotient<<endl;
	
}
