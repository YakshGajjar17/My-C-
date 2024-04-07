#include <iostream>
#include <string>
using namespace std;

class BankAccount
 {
private:
    string depositorName;
    string accountNumber;
    string accountType;
    double balance;

public:
    
    BankAccount(const string& name, const string& accNumber, const string& accType, double initialBalance) 
        : depositorName(name), accountNumber(accNumber), accountType(accType), balance(initialBalance) {}

       void deposit(double amount)
	    {
        balance += amount;
        cout << "Deposited Rs" << amount << " successfully." << endl;
    }

        void withdraw(double amount)
		 {
        if (balance >= amount)
		 {
            balance -= amount;
            cout << "Withdrawn Rs" << amount << " successfully." << endl;
        }
		 else 
		{
           cout << "Insufficient funds! Cannot withdraw Rs" << amount << endl;
        }
    }

    // Member function to display name and balance
    void display() const
	 {
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: Rs" << balance << endl;
    }
};

int main()
 {
    // Example usage of the BankAccount class
    BankAccount account("Raj", "850510452", "Savings", 1000.0);

    // Deposit some money
    account.deposit(500.0);

    // Withdraw some money
    account.withdraw(200.0);

    // Display account details
    account.display();

    return 0;
}

