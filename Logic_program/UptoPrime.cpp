#include<iostream>
using namespace std;

int main()
{
    int upto;

    cout << "Enter a number up to which prime numbers should be printed: ";
    cin >> upto;

   
    if(upto<=0||upto==1)
    {
        cout<<"enter a number greter than 0 or 1"<<endl;
        return 1;
    }

    cout << "Prime numbers up to " << upto << " are:" << endl;
    for (int num = 2; num <= upto; num++) {
        bool isPrime = true;


        for (int i = 2; i <= num/2; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << num << " ";
        }
    }

    cout << endl;
    return 0;
}
