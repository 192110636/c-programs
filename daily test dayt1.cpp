#include<iostream>
using namespace std;
int main()
{
    int num, i, chk=0;
    cout<<"Enter a Number: ";
    cin>>num;
    if(num>0){
	
    for(i=2; i<num; i++)
    {
        if(num%i==0)
        {
            chk++;
            break;
        }
    }
    if(chk==0)
        cout<<"\nIt is a Prime Number";
    else
        cout<<"\nIt is not a Prime Number";
    cout<<endl;
}
else{
	cout<<"enter positive numbers";
}
    return 0;
}
