#include<iostream>
using namespace std;
int main(){
	string x,y;
	cout<<"Enter username:";
	cin>>x;
	cout<<"Renter username:";
	cin>>y;
	if(x==y){
		cout<<"User name is valid";
	}
	else{
		cout<<"User name is invalid";
	}
}
