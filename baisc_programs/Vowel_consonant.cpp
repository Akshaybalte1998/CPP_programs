#include<iostream>
using namespace std;
int main()
{
    char ch;
   
   
    cout<<"Enter Character For Checking   whether the character is a vowel or consonant "<<endl;
    cin>>ch;
     
    if(ch== 'a' || ch== 'e' || ch=='i' || ch== 'o'  || ch== 'u')
       {
        cout<<ch<<" is a vowel"<<endl;
       }
    else
      cout<<ch <<" is a consonant"<<endl;
return 0;

}