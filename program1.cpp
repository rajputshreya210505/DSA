#include <iostream>
#include <limits> 
using namespace std;
 
double findLargest(double a, double b, double c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    double num1, num2, num3;

    cout << "Enter three numbers: ";

    if (!(cin >> num1 >> num2 >> num3)) {
        cout << "Invalid input. Please enter numeric values only.\n";
        return 1;
    }

    double largest = findLargest(num1, num2, num3);

    cout << "The largest number is: " << largest << endl;

    if (num1 == num2 && num2 == num3) {
        cout << "Note: All three numbers are equal.\n";
    }

    return 0;
}
