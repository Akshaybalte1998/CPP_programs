#include <iostream>
using namespace std;

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

// Function to check if a number is a strong number
bool isStrong(int num) {
    int originalNum = num;
    int sum = 0;

    // Calculate the factorial sum of digits
    while (num != 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    // Check if the sum equals the original number
    return sum == originalNum;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (isStrong(num)) {
        cout << num << " is a strong number." << endl;
    } else {
        cout << num << " is not a strong number." << endl;
    }

    return 0;
}


/*
Input  : n = 145
Output : Yes
Sum of digit factorials = 1! + 4! + 5!
                        = 1 + 24 + 120
                        = 145
Input :  n = 534
Output : No
*/