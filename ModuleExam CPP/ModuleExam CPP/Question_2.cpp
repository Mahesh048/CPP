#include<iostream>
using namespace std;

class Book
{
	string title;
	string author;
	float price;

public:

	Book(string _title, string _author, float _price)
	{
		title = _title;
		author = _author;
		price = _price;
	}

	Book(Book& book)
	{
		title = book.title;
		author = book.author;
		price = book.price;
	}

	void display()
	{
		cout << "Book Dtails Are : " << endl;
		cout << "Title : " << title << endl;
		cout << "Author : " << author << endl;
		cout << "Price : " << price<< endl;
	}
};

int main()
{
	string title;
	string author;
	float price;
	cout << "Enter Title of book : " << endl;
	cin >> title;
	cout << "Enter Author of book : " << endl;
	cin >> author;
	cout << "Enter Price of book : " << endl;
	cin >> price;

	Book b1(title, author, price);
	b1.display();
	
	return 0;

}