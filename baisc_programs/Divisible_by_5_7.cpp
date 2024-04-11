#include<iostream>
using namespace std;

int main ()
{
    int num;
    cout<<"Enter  number for checking Divisible by 5 and 7"<<endl;
    cin>>num;

    if(num%5 ==0 && num%7==0)
     cout<<num<<"  is Divisible by 5 and 7"<<endl;
    else
      cout<<num<<"   is  Not Divisible by 5 and 7"<<endl;
      
     return 0;




}