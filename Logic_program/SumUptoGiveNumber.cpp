#include<iostream>
using namespace std;
int main()
{
    int sum=0,num;
    cout<<"enter the number for series "<<endl;
    cin>>num;

    for(int i=0 ; i<=num; i++)
    {
        sum=sum+i;
    }
    cout<<"sum of series  number "<<num <<" is " << sum<<endl;
    return 0;
}