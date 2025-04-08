#include<iostream>
using namespace std;

class two; // forward declaration of class two for friend function in class one

class one
{

	int num1;
public:

	one(int n)
	{
		num1 = n;
	}

	void friend great(one o1, two t1); // here two t1 class object will search for class thats why we use forward declaration to avoid error
};

class two 
{
	int num2;
public:
	two(int n1)
	{
		num2 = n1;
	}

	void friend great(one o1, two t1);
};
void great(one o1, two t1)
{
	cout << "Greatest number is : " << (o1.num1 > t1.num2 ? o1.num1 : t1.num2)<< endl;
	
}

int main()
{
	int num1, num2;

	cout << "Enter two numbers to find greatest " << endl;
	cin >> num1 >> num2;
	
	one o(num1);
	two t(num2);

	great(o, t);
}
