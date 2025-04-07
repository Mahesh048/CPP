#include<iostream>
using namespace std;

class shape
{
	float width;
	float height;
public :

	shape(float width, float height)
	{
		this->height = height;
		this->width = width;
	}

public :
	void circleArea()
	{
		float area = height * width;
		cout << "Area of Circle= " << area <<endl ;

	}
};

class rectangle : public shape
{
	float length;
	float width;
public:

	rectangle(float len, float wid) :shape(length, width)
	{
		this->length = len;
		this->width = wid;
	}

public:
	void Area()
	{
		float area = length * width;
		cout << "Area Of Rectangle is = " << area << endl;

	}

};

int main()
{
	

	rectangle r1(2,3);
	r1.circleArea();
	r1.Area();

}