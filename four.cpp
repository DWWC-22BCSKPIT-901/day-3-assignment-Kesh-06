#include <iostream>
using namespace std;

int sumOfArray(int arr[], int n) {
    if (n == 0)
        return 0; // Base case: no elements left
    return arr[n - 1] + sumOfArray(arr, n - 1); // Add last element to sum of remaining
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Sum of array elements is " << sumOfArray(arr, n) << endl;
    return 0;
}
