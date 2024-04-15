#include <iostream>

using namespace std;

bool isPalindrome(int num) {
    int reversedNum = 0;
    int originalNum = num;

    // Reverse the number
    while (num > 0) {
        reversedNum = reversedNum * 10 + num % 10;
        num /= 10;
    }

    // Check if the reversed number is equal to the original number
    return originalNum == reversedNum;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPalindrome(number))
        cout << number << " is a palindrome." << endl;
    else
        cout << number << " is not a palindrome." << endl;

    return 0;
}
