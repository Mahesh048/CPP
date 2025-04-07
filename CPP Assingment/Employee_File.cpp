#include<iostream>
#include<fstream>
#include "Employee_Exception.h";
using namespace std;


class Employee
{
	string name;
	int empId;
	int sal;

public:

	Employee(string _name, int _empId, int _sal)
	{
		name = _name;
		empId = _empId;
		sal = _sal;
	}

	void getData()
	{
		cout << "Name: " << name << endl;
		cout << "Emp ID : " << empId << endl;
		cout << "Salary : " << sal << endl;
	}

	void getFile()
	{
		cout << name << "\t\t" << empId << "\t\t" << sal << "\t\t" << endl;
	}

};

int main()
{
	string name;
	int empId;
	int sal;
	char ch;
	ofstream file;
	file.open("D:/employee.bin");

	do
	{
		try
		{
			cout << "Enter name : " << endl;
			cin >> name;
			cout << "Enter Emp ID : " << endl;
			cin >> empId;
			cout << "Salary : " << endl;
			cin >> sal;
			if (empId != 0 && sal != 0)
			{
				Employee emp1(name, empId, sal);
				emp1.getData();
				file.write((char*)&emp1, sizeof(emp1));
			}
			else
			{
				throw Database_Exception();
			}
		}
		catch (Database_Exception& e)
		{
			e.what("Smothing gone wrong");
		}
		
		cout << "Want more Data to store: Y OR N" << endl;
		cin >> ch;
	} while(ch == 'Y' || ch == 'y');
	file.close();
	
	Employee emp2(name, empId, sal);
	ifstream file1;
	file1.open("D:/employee.bin");

	file1.read((char*)&emp2, sizeof(emp2));
	cout << "Name of Emp \t Emp-Id \t Salary " << endl;
	cout << "-------------------------------------------------------" << endl;

	while (!file1.eof())
	{
		emp2.getFile();
		file1.read((char*)&emp2, sizeof(emp2));

	}
	file.close();

	return 0;


}