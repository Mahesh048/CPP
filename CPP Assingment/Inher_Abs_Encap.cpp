#include <iostream>
using namespace std;

class vehicle {
private :
	string make;
	string model;
	int year;
public:
	virtual void startEngine() = 0;
	vehicle(string make, string model, int year)
	{
		this->make = make;
		this->model = model;
		this->year = year;
	}
	string getmake() {
		return make;
	}
	string getmodel() {
		return model;
	}
	int getyear() {
		return year;
	}
};

class Car : public vehicle
{

public:
	Car(string make, string model, int year) : vehicle( make,  model,  year){}

	void  startEngine() {
		cout << "Car " << getmake() << " which is " << getmodel() << " is getting started.. " << getyear() << " ........broomm broommmmm!!" << endl;
	}
	

};
class motorCycle : public vehicle {
public:
	motorCycle(string make, string model, int year) : vehicle(make, model, year) {}

	void  startEngine() {
		cout << "Motor Cycle " << getmake() << " which is " << getmodel() << " is getting started.. " << getyear() << " ........broomm broommmmm!!" << endl;
	}
};


int main() {

	vehicle* v[2];

	for (int i = 0;i < (sizeof(v) / sizeof(v[1])); i++)
	{
		v[i] = new Car("Chevi", "Spark", 2010);
		v[i]->startEngine();

	}

	for (int i = 0;i < (sizeof(v) / sizeof(v[1])); i++)
	{
		v[i] = new motorCycle("RE", "Hunter350", 2021);
		v[i]->startEngine();

	}
	return 0;
}