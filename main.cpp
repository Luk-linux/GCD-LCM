#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int num1, num2, num3;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    cout << "GCD: " << gcd(num1, num2) << endl;
    cout << "LCM: " << lcm(num1, num2) << endl;

    cout << "Do you want to enter a third number? (yes=1/no=0): ";
    int choice;
    cin >> choice;

    if (choice == 1) {
        cout << "Enter third number: ";
        cin >> num3;
        cout << "GCD of all three: " << gcd(gcd(num1, num2), num3) << endl;
        cout << "LCM of all three: " << lcm(lcm(num1, num2), num3) << endl;
    }

    return 0;
}
