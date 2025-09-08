#include <iostream>
using namespace std;

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if(b != 0)
        return a / b;
    else {
        cout << "Cannot divide by zero!\n";
        return 0;
    }
}

int main() {
    int choice;
    float num1, num2, result;

    while(true) {
        cout << "\nChoose operation:\n";
        cout << "1. Add\n";
        cout << "2. Subtract\n";
        cout << "3. Multiply\n";
        cout << "4. Divide\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice == 5) {
            cout << "Goodbye!\n";
            break;
        }

        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

        if(choice == 1) {
            result = add(num1, num2);
            cout << "Result = " << result << endl;
        }
        else if(choice == 2) {
            result = subtract(num1, num2);
            cout << "Result = " << result << endl;
        }
        else if(choice == 3) {
            result = multiply(num1, num2);
            cout << "Result = " << result << endl;
        }
        else if(choice == 4) {
            result = divide(num1, num2);
            cout << "Result = " << result << endl;
        }
        else {
            cout << "Invalid choice! Please try again.\n";
        }
    }

    return 0;
}
