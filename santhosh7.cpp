#include<iostream>  
using namespace std;  
class Employee  
 {  
   public:  
        Employee()    
        {    
            cout<<"Constructor Invoked";    
        }    
        ~Employee()    
        {    
            cout<<"Destructor Invoked";    
        }  
};  
int main(void)   
{  
    Employee e1;   
    Employee e2;   
    return 0;  
}  
