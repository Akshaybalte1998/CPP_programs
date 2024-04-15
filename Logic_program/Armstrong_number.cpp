#include<iostream>
using namespace std;
int main()
{
    int number, total=0, reminder ,temp;
    cout<<"enter the number"<<endl;
    cin>>number;
    
    temp = number;

    while(number!=0)
    {
        reminder = number%10;

        total = total + reminder*reminder*reminder;

        number = number/10;
    }
    if(temp== total)
       cout<<"Given number is armstrong number "<<endl;
    else
         cout<<"Given number is  NOt armstrong number "<<endl;

}