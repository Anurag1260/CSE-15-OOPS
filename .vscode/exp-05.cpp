#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNo;
    string name;
    float balance;

public:
    void createAccount() {
        cout << "Enter Account Number: ";
        cin >> accountNo;

        cout << "Enter Account Holder Name: ";
        cin >> name;

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit(float amount) {
        balance += amount;
        cout << "Amount Deposited Successfully.\n";
    }

    void withdraw(float amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal Successful.\n";
        } else {
            cout << "Insufficient Balance.\n";
        }
    }

    void display() {
        cout << "\nAccount Details\n";
        cout << "Account Number : " << accountNo << endl;
        cout << "Account Holder : " << name << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc;
    float amount;

    acc.createAccount();

    cout << "\nEnter amount to deposit: ";
    cin >> amount;
    acc.deposit(amount);

    cout << "Enter amount to withdraw: ";
    cin >> amount;
    acc.withdraw(amount);

    acc.display();

    return 0;
}