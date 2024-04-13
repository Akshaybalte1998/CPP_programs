#include<iostream>
using namespace std;
int main()
{
    int number, reverse=0, reminder;
    cout<<"enter the number"<<endl;
    cin>>number;

    cout<<"number before reverse : "<<number<<endl;

    while(number!=0)
    {
        reminder = number%10;

        reverse = reverse*10 + reminder;

        number = number/10;
    }
    cout<<"number after reversing:  "<<reverse;
}