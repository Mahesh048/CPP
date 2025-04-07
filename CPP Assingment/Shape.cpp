#include<iostream>
using namespace std;

class Shape
{
public:

	virtual void draw() = 0;
	virtual void area() = 0;


};

class Circle : public Shape
{
	int rad;
	float PI = 3.14;

public:
	Circle(int rad)
	{
		this->rad = rad;
	}
	void area()
	{
		float area = PI * rad * rad;

	}
	void draw()
	{
		cout << "Circle is Drawn.." << endl;

	}
};

class Rect : public Shape
{

public :
	void draw()
	{
		cout << "Rectangle is Drawn..." << endl;

	}
};

int main()
{
	Shape* s1[2];

	s1[0] = new Circle();
	s1[0]->draw();

	s1[1] = new Rect();
	s1[1]->draw();

	return 0;
}