#include <iostream>
using namespace std;

// BankAccount class definition
class BankAccount {
private:
    float balance; // Private data member

public:
    // Constructor to initialize balance
    BankAccount() {
        balance = 0;
    }

    // Function to deposit money
    void deposit(float amount) {
        if(amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Function to withdraw money
    void withdraw(float amount) {
        if(amount > 0) {
            if(amount <= balance) {
                balance -= amount;
                cout << "Withdrawn: " << amount << endl;
            } else {
                cout << "Insufficient balance!" << endl;
            }
        } else {
            cout << "Invalid withdrawal amount!" << endl;
        }
    }

    // Function to check the current balance
    void displayBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account;

    account.displayBalance();

    account.deposit(500);
    account.displayBalance();

    account.withdraw(200);
    account.displayBalance();

    account.withdraw(400); 
    account.displayBalance();

    return 0;
}
