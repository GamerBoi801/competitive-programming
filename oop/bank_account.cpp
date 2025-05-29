#include <iostream>
using namespace std;

class BankAccount {
    private:
        string accountNumber;
        string accountHolderName;
        double balance;
    
    public:
        //constructor
        BankAccount(string account_number, string account_holder_name, double Balance) {
            accountNumber = account_number;
            accountHolderName = account_holder_name;
            balance = Balance;
        }
        BankAccount() {
            accountNumber = "0000000000";
            accountHolderName = "UNkNOW";
            balance = 0.0;
        }
        
        ~BankAccount() {
            cout << "Account number with Number: " << accountNumber << " is being destroyed" << endl;
        }
        // getters
        string getAccountNumber() const {
            return accountNumber;
        }

        string getAccountHolder() const {
            return accountHolderName;
        }

        double getBalance() const {
            return balance;
        }

        void deposit(double amount) {
            balance += amount;
        }

         // Withdraw method with validation
        void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount" << endl;
            return;
        }
        if (balance - amount < 0) {
            cout << "Error: insufficient funds, withdrawal denied." << endl;
        } else {
            balance -= amount;
        }
    }
        
        void display() {
            cout << "Bank Account Number: " << accountNumber << endl;
            cout << "Account Holder Name: " << accountHolderName << endl;
            cout << "Balance: $" << balance << endl;
        }
    };

int main() {
    BankAccount acc1 = BankAccount("4815230", "geese", 1992612962.99);
    acc1.display();
    acc1.deposit(99.99);
    acc1.withdraw(99.99);
    acc1.withdraw(5000000000); // Test insufficient funds
    acc1.display();

}