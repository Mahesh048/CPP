#include <iostream>
using namespace std;

class BankAccount {
private: 
	int accNumber;
	int accBalance;
public:
	BankAccount(int accNumber, int accBalance) {
		this->accNumber = accNumber;
		this->accBalance = accBalance;
	}

	friend void transferMoney(BankAccount ba);
};

void transferMoney(BankAccount ba) {
	int tranferMoney;
	cout << "Enter the amount of money u have to transfer : " <<endl;
	cin >> tranferMoney;
	int totalBalance = ba.accBalance - tranferMoney;
	cout << "Total Amount : " << totalBalance;
}


int main() 
{
	BankAccount bank(54321 , 50000);
	transferMoney(bank);

}
