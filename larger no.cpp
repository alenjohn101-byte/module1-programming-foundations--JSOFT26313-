#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (num1 > num2) 
        cout << "The larger number is: " << num1 << endl;
    else if (num2 > num1) 
        cout << "The larger number is: " << num2 << endl;
    else 
        cout << "Both numbers are equal." << endl;

    return 0;
}
