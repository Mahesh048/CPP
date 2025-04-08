#include<iostream>
#include<exception>

using namespace std;

class BankException : public exception
{
public:

	void what(string message)
	{
		cout << message;
	}
};

class InvalidAmountException : public  BankException
{
public:
	

	void what(string message)
	{
		cout << message;
	}
	void InvalidAmount()
	{
		cout << "Invalid Amout Entered" << endl;

	}

};

class InssufficientFundsException : BankException
{
public:
	
	void InssufficientFunds()
	{
		cout << "Invalid Funds In Account " << endl;
	}
};

class TransferFailException : public BankException
{
public:
	void TransferFail()
	{
		cout << "Transfer Failed due to Insufficeint funds" << endl;

	}
};



class BankAccout
{
	int accn;
	int bal;

public:
	
	BankAccout(int accn, int bal)
	{
		this->accn = accn;
		this->bal = bal;
	}

	int getbal()
	{
		return bal;
	}

	void depo(double amount)
	{
		bal = bal + amount;
		cout << "Account Balance After Deposit : " << bal << endl;
		
	}

	void withdraw(double amount)
	{
		bal = bal - amount;
		cout << "Account Balance After Withdraw : " << bal << endl;
	}

	void transfer(double amount)
	{
		bal -= amount;
		cout << "Balance after tranfer money :" << bal << endl;
	}
	
};
int main()
{
	int accn;
	int bal;
	int ch;
	char choice;
	double amount;
	cout << "Enter Account Number :" << endl;
	cin >> accn;
	cout << "Enter Account Balance :" << endl;
	cin >> bal;

	BankAccout bank1(accn, bal);
	do
	{
		cout << "Enter chiose \n 1. Deposit \n 2. Withdraw \n 3. Tranfer \n 4.Exit " << endl;
		cin >> ch;
		switch (ch)
		{
		case 1:
			try
			{
				cout << "Enter Amount to deposit :" << endl;
				cin >> amount;
				if (amount > 0)
				{
					bank1.depo(amount);
				}
				else
				{

					throw InvalidAmountException();
				}
			}
			catch (InvalidAmountException& e)
			{
				e.what("Plese Enter Correct Amount... !!! \n ");
			}
			break;

		case 2:
			try
			{
				cout << "Enter Amount to Withdraw :" << endl;
				cin >> amount;
				if (amount < bank1.getbal())
				{
					bank1.withdraw(amount);
				}
				else
				{
					throw InssufficientFundsException();
				}
			}
			catch (InssufficientFundsException& e)
			{
				e.InssufficientFunds();
			}
			break;

		case 3:
			try
			{
				cout << "Enter Amount to be Transfer :" << endl;
				cin >> amount;

				if (amount < bank1.getbal())
				{
					bank1.transfer(amount);

				}
				else
				{
					throw TransferFailException();
				}
			}
			catch (TransferFailException& e)
			{
				e.TransferFail();
			}
			break;

		case 4:
			exit;
		}
		
	} while (ch != 4);
	
	return 0;
}
