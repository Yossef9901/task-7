#include <iostream>
using namespace std;

int main() {
    const int length{10}; // Length of the array
    int arr[length];       // Array declaration
    int sum {0};           // To store the sum of the elements
    long long product{1}; // To store the product of the elements

    // Take input values from the user
    cout << "Enter " << length << " integers: ";
    for (int i = 0; i < length; i++) {
        cin >> arr[i];
    }

    //Print the values of the array in order
    cout << "Array elements: ";
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    //Print the values of the array in reverse order
    cout << "Array elements in reverse: ";
    for (int i = length - 1; i >= 0; i--) {
        cout << arr[i] << " ";
        
    }
    cout << endl;

    // Calculate and print the sum of the elements
    for (int i = 0; i < length; i++) {
        sum += arr[i];
    }
    cout << "Sum of the elements: " << sum << endl;

    // Calculate and print the product of the elements
    for (int i = 0; i < length; i++) {
        product *= arr[i];
    }
    cout << "Product of the elements: " << product << endl;

    return 0;
}