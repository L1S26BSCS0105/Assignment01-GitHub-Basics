/*
Program: Sum of first 50 natural numbers
Name: Tahreem Fatima
Reg No: L1S26BSCS0105
Assignment: 01 - Getting started with Github.
*/

#include <iostream>
using namespace std;

int main() {
    int sum = 0;
     // Method 1: adding numbers one by one using a loop
    for (int i = 1; i <= 50; i++) {
        sum += i;
    }
    cout << "Sum of first 50 natural numbers : " << sum;

    // Method 2: verifying using the formula n(n+1)/2
    const int N = 50;
    int formulaSum = N * (N + 1) / 2;
     cout << "\nSum using formula n(n+1)/2: " << formulaSum << endl;
    return 0;
}
