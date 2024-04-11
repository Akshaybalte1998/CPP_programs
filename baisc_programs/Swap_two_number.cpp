#include<iostream>
using namespace std;

int main ()
{
    int num1 , num2,temp;
    cout<<"Enter two number for Swap"<<endl;
    cin>>num1>>num2;


    cout<<"before swapping"<<endl;
    cout<<"num1 = "<<num1<<endl;
    cout<<"num2 = "<<num2<<endl;
     
    temp = num1;
    num1 = num2;
    num2 = temp ;
     cout<<"After  swapping"<<endl;
    cout<<"num1 = "<<num1<<endl;
    cout<<"num2 = "<<num2<<endl;
     return 0;




}
