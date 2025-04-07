#include <iostream>
#include <fstream>
using namespace std;

class bank {
	int id;
	char name[20];
	
public:
	void enq();
};

void bank::enq() {
	cout << "Enter id : " << endl;
	cin >> id;
	cout << "Enter name : " << endl;
	cin >> name;
}

int main() {
	bank b;
	char op;
	ofstream file("C:/Users/DAC-User30/Desktop/Assignments/Anm1.txt");
	do
	{
		b.enq();
		file.write((char*)&b, sizeof(b));
		cout << "Data Stored.." << endl;
		cout << "Anymore Data...?" << endl;
		cin >> op;
	} while (op == 'y' || op == 'Y');

	file.close();
}
