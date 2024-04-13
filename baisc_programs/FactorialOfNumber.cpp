#include<iostream>
using namespace std;
int main()
{
    int number ,factorial=1;
    cout<<"Enter the number "<<endl;
    cin>>number;
    for(int i=1 ; i<=number;i++)
    {
        factorial =factorial *i;
        if(number== i)
        {
            cout<<" Factorial of given number "<<number<<" is : "<<factorial<<endl;
        }
    }
return 0;
}