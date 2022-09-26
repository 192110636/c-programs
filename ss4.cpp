#include<iostream>
using namespace std;
int main()
{
	int n,x;
	cout<<"Enter age of person:";
	cin>>n;
	x=18-n;
	if(n>18){
		cout<<"you are elgible for voting";
		
	}
	else{
		cout<<"you require "<<x<<" years for voting";
	}
}
