#include<iostream>
using namespace std;

int main()
{
    int num;
    bool prime= true;

    cout<<"Enter the positive  number :"<<endl;
    cin>>num;

 	for(int i=2;i<=num/2;i++)
    {  
        if(num%i==0)
        {
            prime = false;
            break;

        }
    }

    if(prime)
        cout<<num<<" is prime number"<<endl;
    else
        cout<<num<<" is not  prime number"<<endl;
   


    return 0;
}
