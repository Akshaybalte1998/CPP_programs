#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"enter the number upto print the even and odd values"<<endl;
    cin>>number;
    for(int i=1,j=2;i<=number;i++,j++)
    {
        cout<<i++<<"      "<<j++<<endl;
    }
}