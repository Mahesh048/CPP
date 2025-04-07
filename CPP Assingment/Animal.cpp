#include<iostream>
using namespace std;

class Animal
{
public:
	int age;
	string name;

	/*Animal(int age, string name)
	{
		this->age = age;
		this->name = name;

	}*/

	virtual void makesound()
	{
		cout << " Makes Sound " << endl;

	}

	virtual void eat()
	{
		cout << " Animals Eat their Food " << endl;

	}
};

class Dog : public Animal
{
public:
	
	Dog(int age, string name)
	{
		this->age = age;
		this->name = name;
	}

	void makesound()
	{
		cout << "Dog Barks " << endl;

	}

	void eat()
	{
		cout << "Dogs eat Pedegree" << endl;
	}
	void disp()
	{
		cout << "Name of Dog :" << name << endl;
		cout << "Dogs Age : " << age << endl;
	}
};

int main()
{

	Animal a1;

	Dog d1(4,"Google");

	Animal* ptr;

	ptr = &d1;

	d1.disp();
	ptr->makesound();
	ptr->eat();

}