#include <iostream>
using namespace std;

int sumOfNaturalNumbers(int n) {
    if (n == 0) 
        return 0; // Base case
    return n + sumOfNaturalNumbers(n - 1); // Recursive case
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Sum of natural numbers up to " << n << " is " << sumOfNaturalNumbers(n) << endl;
    return 0;
}
