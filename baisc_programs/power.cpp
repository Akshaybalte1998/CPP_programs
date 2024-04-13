#include<iostream>
using namespace std;
int main()
{
    int base , exponent,result=1;
    cout<<"Enter the base "<<endl;
    cin>>base;
    cout<<"enter the exponent"<<endl;
    cin>>exponent;
    if(exponent==0)
    {
        result=1;
        return 1;
    }
    if(exponent>0)
    {
        for(int i=1 ; i<=exponent; i++)
        {
        result = result *base ;
        }
    cout<<"the base "<<base <<" to the exponenmt "<<exponent<<" is :"<<result;
    }
   
   
}