#include<iostream>
using namespace std;
int main()
{
    int Total=0,num;
    cout<<"enter the number for series "<<endl;
    cin>>num;

    for(int i=0 ; i<=num; i++)
    {
        Total=Total+i;
    }
    cout<<"sum of series  number "<<num <<" is " << Total<<endl;
    return 0;
}