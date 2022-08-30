#include<iostream>
using namespace std;
class Account
{
	public:
		int accno;
		string name;
		static float rateOfinterest;
		Account(int accno, string name)
		{
		this->accno=accno;
		this->name=name;	
		}
		void display()
		{
			cout<<accno<<"<<name<<"<<rateOfinterest<<endl;
		}
};
float Account::rateOfinterest=6.5;
int main(void)
{
Account a1=Account(201,"sanjay");
Account a2=Account(202,"Nakul");
a1.display();
a2.display();
return 0;
}
