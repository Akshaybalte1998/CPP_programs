#include <iostream>
using namespace std;

// Function to check if a number is neon
bool isNeon(int num) {
    int square = num * num;
    int sum = 0;

    // Calculate the sum of digits of the square
    while (square != 0) {
        sum += square % 10;
        square /= 10;
    }

    // Check if the sum equals the original number
    return sum == num;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (isNeon(num)) {
        cout << "Neon Number" << endl;
    } else {
        cout << "Not a Neon Number" << endl;
    }

    return 0;
}

/*
Input : 9
Output : Neon Number
Explanation: square is 9*9 = 81 and 
sum of the digits of the square is 9.

Input :12
Output : Not a Neon Number
Explanation: square is 12*12 = 144 and 
sum of the digits of the square is 9 (1 
+ 4 + 4) which is not equal to 12.
*/