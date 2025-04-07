#include<iostream>
#include<fstream>
using namespace std;

class Bank
{
public:
	char name[20];
	int accNo;
	float bal;

	//void setData()
	//{
	//	cout << "Enter Account Number : " << endl;
	//	cin >> accNo;

	//	cout << "Enter Name : " << endl;
	//	cin >> name;

	//	cout << "Enter Account Balance" << endl;
	//	cin >> bal;
	//}

	void getData()
	{
		//cout << "Accout Details are : " << endl
		//	<< "Account Number : " << accNo << endl
		//	<< "Name of Accout Holder : " << name << endl
		//	<< "Account Balance : " << bal << endl;
		cout << accNo <<"\t\t"<< name<< "\t\t"<<" bal\t\t" << endl;
	}
};

int main()
{
	Bank b1;
	//b1.setData();
	/*ofstream file;
	file.open("D:/ABC.txt");
	char op;

	do
	{
		b1.getData();
		file.write((char*)&b1, sizeof(b1));
		cout << " ~~~ Data Stored Successfully ~~~" << endl;
		cout << "Want More Data to enter | Y | or | N |" << endl;
		cin >> op;
	} while (op == 'Y' || op == 'y');
	file.close();*/

	ifstream file;
	file.open("D:/ABC.txt");

	
	file.read((char*)&b1, sizeof(b1));
	cout << "Accout Number \t Name \t\t Acc Bal \t\t" << endl;
	cout << "------------------------------------------------------------" << endl;

	while(!file.eof())
	{
		b1.getData();
		file.read((char*)&b1, sizeof(b1));
	}
	file.close();
	return 0;
}