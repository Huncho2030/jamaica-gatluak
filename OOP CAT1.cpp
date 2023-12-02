#include<iostream>
#include<conio.h>

using namespace std;
int main(){
	int a,b;
	char o;
	float sum,sub,mul,div;
	cout<<"\t\t\t calculator";
	cout<<"\n enter 1st value:";
	cin>>a;
	cout<<"please enter 2nd value:";
	cin>>b;
	cout<<"please enter operator like +,-,*,\:";
	cin>>o;
	
	switch(o){
		case '+':
		sum=a+b;
		cout<<"sum="<<sum;
		break;
		case '-':
		sum=a-b;
		cout<<"substract="<<sub;
		break;
		case '*':
		mul=a*b;
		cout<<"multiple="<<mul;
		break;
		case '/':
		div=a/b;
		cout<<"division="<<div;
		break;
		defluat:
			cout<<"inalid operator symbol you enter please try again..";
			
	}
	int n;
	cout<<"enter 1 for main menu";
	cin>>n;
	if(n==1){
		return main();
	}
	else{
		cout<<"try again";
	}
	
	
}
	
	

