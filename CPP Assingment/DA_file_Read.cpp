//Retrieve data from file
#include<iostream>
#include<fstream>
using namespace std;

class bank {
public:
	char name[20];
	int accno;
	float bal;
	void getshu() {
		cout << accno << "\t\t " << name << "\t\t" << bal << endl << endl;
	}
};

int main() {
	bank b;
	ifstream file("C:/Users/DAC-User30/Desktop/Assignments/Calculator.txt");
	file.read((char*)&b, sizeof(b));
	cout << "Account number\t  " << "Name\t\t" << "Balance" << endl;
	cout << "_________________________________________________" << endl;
	while (!file.eof()) {
		b.getshu();
		file.read((char*)&b, sizeof(b));
	}
	file.close();
}
