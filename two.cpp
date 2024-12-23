#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1) 
        return 1; // Base case
    return n * factorial(n - 1); // Recursive case
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Factorial of " << n << " is " << factorial(n) << endl;
    return 0;
}
