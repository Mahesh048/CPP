//Search the data from file
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

int main() 
{
	bank b;
	ifstream file("C:/Users/DAC-User30/Desktop/Assignments/Calculator.txt");
	int idno, found = 0;
	cout << "Enter ID to be found.... " << endl;
	cin >> idno;
	file.read((char*)&b, sizeof(b));
	while (!file.eof()) 
	{
		if (b.accno == idno) 
		{
			found = 1;
			cout << "ID found!" << endl;
			cout << "Account Number: " << b.accno << endl;
			cout << "Name: " << b.name << endl;
			cout << "Balance: " << b.bal << endl;

			break;
		}
		file.read((char*)&b, sizeof(b));
	}
		file.close();
		if (found == 0) 
		{
			cout << "ID not found" << endl;
		}
}