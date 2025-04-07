#include<iostream>
using namespace std;

class car
{
	string made;
	string model;
	int year;
	int speed;

public:

	void setData(string made, string model, int year, int speed)
	{
		this->made = made;
		this->model = model;
		this->year = year;
		this->speed = speed;
	}

	void getData()
	{
		cout << "Made =" << made << endl;
		cout << "Madel = " << model << endl;
		cout << "Year = " << year << endl;
		cout << "Top Speed = " << speed << "Kmph" << endl;

	}
};

int main()
{
	car c1;
	c1.setData("In INDIA", "Bez C Class", 2014, 180);
	c1.getData();
}
