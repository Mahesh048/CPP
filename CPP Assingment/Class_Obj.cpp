#include <iostream>
using namespace std;

class Employee {
	int employeeId;
	string name;
	double salary;

public:
	void setEmployee(int Id, string n, double s) {
		employeeId = Id;
		name = n;
		salary = s;
	}

	void display() {
		cout << "Employee id : " << employeeId << "\nEmployee name : " << name << "\nEmployee salary : " << salary;
	}
};

int main() {
	Employee em;
	em.setEmployee(1, "Adarsh", 20000);
	em.display();
}