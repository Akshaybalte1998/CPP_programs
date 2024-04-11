#include<iostream>
using namespace std;
int main()
{
   int angle1, angle2 , angle3;
   cout<<"Enter three angles of triangle "<<endl;
   cin>>angle1>>angle2>>angle3;
   // Checking sum of angles  of triangle is 180 or not and anglesshould be greater than 0 
   if(angle1+angle2+angle3==180 && angle1>0 && angle2>0 && angle3>0)
      {
         cout<<" Triangle is valid"<<endl;
      }
   else
      cout <<" Triangle is  Not valid "<<endl;
return 0;

}