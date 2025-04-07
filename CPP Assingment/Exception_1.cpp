#include<iostream>

using namespace std;

class MathException //: public exception
{
public:

	void print()
	{
		cout << "Message : " << endl;

	}
};

class DivideByZero :public MathException
{
public:

	void print()
	{
		cout << "Divide BY Zero : " << endl;

	}
};

class NegativeSquareRootException :public MathException
{
public:

	void print()
	{
		cout << "Negative Square Root Exception " << endl;

	}
};

class matEx
{
	

public:

	void  div(int num1, int num2)
	{
		cout << "Division is :" << num1 / num2 << endl;

	}

	void safeSqrt(double num)
	{
		cout << "Square Root of " << num << " is : " << num * num << endl;

	}


};

int main()
{
	int num1, num2;
	double num3;

	cout << "Enter Two values :" << endl;
	cin >> num1 >> num2;
	matEx m1;
	try
	{
		if (num2 == 0)
		{
			throw DivideByZero();

		}
		else
		{
			m1.div(num1, num2);
		}
	}
	catch (DivideByZero& e)
	{
		e.print();
			
	}

	try
	{
		cout << "Enter value for Square root :" << endl;
		cin >> num3;
		if (num3 < 0)
		{
			throw NegativeSquareRootException();

		}
		else
		{
			m1.safeSqrt(num3);
		}
	}
	catch (NegativeSquareRootException& e)
	{
		e.print();
	}

	return 0;
}