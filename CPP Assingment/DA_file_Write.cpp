//Store the data into file
#include<fstream>
#include<iostream>
using namespace std;

class bank {
public:
	char name[20];
	int accno;
	float bal;
	void getshu() {
		cout << "Enter account number" << endl;
		cin >> accno;
		cout << "Enter name" << endl;
		cin >> name;
		cout << "Enter balance" << endl;
		cin >> bal;
		cout << endl << "Account name " << accno << endl << "Name " << name << endl << "Balance " << bal << endl << endl;
	}
};

int main() {
	bank b;
	ofstream file;
	file.open("C:/Users/DAC-User30/Desktop/Assignments/Calculator.txt");
	char op;
	do {
		b.getshu();
		file.write((char*)&b, sizeof(b));
		cout << "Data stored" << endl;
		cout << "Any more data? (y/n) " << endl;
		cin >> op;
	} while (op == 'Y' || op == 'y');
	file.close();
}
