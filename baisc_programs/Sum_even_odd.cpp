#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"enter a number "<<endl;
    cin>>num;
    int sum_even= 0 , sum_odd=0 ;
    for(int i = 1 ;i<=num; i++)
    {
        if(i%2==0)
        {
            sum_even= sum_even+i;
        }
        else
        {
           sum_odd = sum_odd + i; 
        }
        
    }
    cout<<"sum of all even number in  between  "<<sum_even<<endl;
    cout<<"sum of all odd number in between  "<<sum_odd<<endl;
}