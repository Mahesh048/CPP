#include<iostream>
using namespace std;

class Payment
{
	
public:

	virtual void processPayment()
	{
		cout << "Paymnet Processed ...." << endl;
		
	}

};

class CreditCard : public Payment
{
	int billamt;
	int totalamt=0;
public:
	CreditCard(int billamt)
	{
		this->billamt=billamt;
		
	}

	void processPayment()
	{
		cout << "** wel-come to Credit Card Payment System** \n :";
		//cin >> billamt;
		//cout << "Charges apllied for CCard is + 2.5%" << endl;
		totalamt += billamt;
		cout << "Amount Paid :" << totalamt << endl;
	}

};

class Paypal : public Payment
{
	int billamt;
	int totalamt=0;
public:
	Paypal(int billamt)
	{
		this->billamt = billamt;
		
	}
	void processPayment()
	{
		cout << "** wel-come to Paypal Payment System ** \n  :" << endl;
		//cin >> billamt;
		//cout << "Charges apllied for Paypal is + 1.5%" << endl;
		totalamt += billamt;
		cout << "Amount Paid :" << totalamt << endl;
	}
};

int main()
{
	Payment* ptr[2];
	//Payment* ptr1;

	CreditCard c1(2000);
	ptr[0] = &c1;
	ptr[0]->processPayment();


	Paypal p1(2000);
	ptr[1] = &p1;
	ptr[1]->processPayment();

}