#include <iostream>
using namespace std;
int checkHarshad(int num)
{
    int sum = 0;
    int temp = num;  
    while(temp != 0)
	{
        sum = sum + temp % 10;
        temp /= 10;
    }  
    return num % sum == 0;
}
int main ()
{
    int n;
    cout <<"Enter a number";
    cin>>n;
    if(n=int(n))
{
    if(checkHarshad(n))
        cout << n << " is a Harshad's number";
    else
        cout << n << " is not a Harshad's number";
}
else{
	cout<<"Enter integers";
}
    return 0;
}
