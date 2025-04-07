#include <iostream>
#include <fstream>
using namespace std;

class bank {
public:
	int id;
	char name[20];

public:
	void display();
};

void bank::display()
{
	cout << id << endl
		 << name << endl;
}

int main() {
	bank b;
	ifstream file("C:/Users/DAC-User30/Desktop/Assignments/Anm.txt");

	while (file.read((char*)&b, sizeof(b)))
	{
		b.display();
	}
	file.close();

	return 0;
}                                                                                                                          