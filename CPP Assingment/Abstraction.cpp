#include <iostream>
using namespace std;

class bankAccount {
	int accNumber;
	double balance;



public:
	bankAccount(int acc, double bal) {
		accNumber = acc;
		balance = bal;
	}

	void deposit(int amount) {

		validateTransation(amount);
		int depAmount = amount;
		balance = balance + depAmount;
		cout << "Deposited amount" << depAmount << endl;
	}

	void withdraw(int amount) {

		if (validateTransation(amount) == true)
		{
			int withdraw = amount;
			balance = balance - withdraw;
			cout << "withdraw amount" << withdraw << endl;
		}
	}

	void display() {

		cout << "Account number" << accNumber << endl;
		cout << "Balance is " << balance << endl;

	}

private:

	bool validateTransation(int amnt)
	{
		if (balance <= amnt)
		{
			cout << "Balance Insufficient" << endl;

			return true;
		}
		else {
			cout << "Traction Succesfull....!!!!";
			return false;
		}
	}
};

int main() {
	bankAccount ba(12, 500);

	ba.deposit(1000);

	ba.withdraw(2500);

	ba.display();
}