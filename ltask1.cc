#include <iostream>
using namespace std;

int factorialRecursive(int n) {
    if (n <= 1)
        return 1;  
    else
        return n * factorialRecursive(n - 1);  
}

int factorialIterative(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    // Check for negative numbers
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers.\n";
    } else {
        cout << "Factorial (Recursive): " << factorialRecursive(num) << endl;
        cout << "Factorial (Iterative): " << factorialIterative(num) << endl;
    }

    return 0;
}
