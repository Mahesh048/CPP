#pragma once
#include<iostream>
using namespace std;

class Database_Exception
{
public:

	void what(string err)
	{
		cerr << err << endl;
		cout << "Negative ID OR Balance... !!" << endl;
	}
};