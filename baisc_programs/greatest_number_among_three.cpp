#include<iostream>
using namespace std;
int main()
{
    int num1, num2,num3;
    cout<<"enter the three number"<<endl;
    cin>>num1>>num2>>num3;

    if(num1>num2)
    {
        if(num1>num3)
            cout<<num1<<"is greatest number"<<endl;
        else
        cout<<num3<<"is greatest number"<<endl;
    }
    else
    {
        if(num2>num3)
            cout<<num2<<"is greatest number"<<endl;
        else
            cout<<num3<<"is greatest nunber"<<endl;
    }
}