#include<iostream>
using namespace std;

class one
{
	int num1;

public:

	friend void maximum(int num1);
};


void maximum(int num1)
{ }

class two // : public one
{
	int num2;

public:
	void maximum(int num1, int num2)
	{
		cout << "Maximum of Two : " << (num1 > num2 ? num1 : num2) << endl;
	}

};

int main()
{
	int num1, num2;
	cout << "Enter two Values : " << endl;
	cin >> num1 >> num2;

	two t1;
	t1.maximum(num1, num2);

}