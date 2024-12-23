#include <iostream>
using namespace std;

void printFibonacci(int n, int a = 0, int b = 1) {
    if (n > 0) {
        cout << a << " ";
        printFibonacci(n - 1, b, a + b);
    }
}

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    printFibonacci(n);
    return 0;
}
