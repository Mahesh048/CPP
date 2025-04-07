#include <iostream>
using namespace std;

class base1 {
public:
	int a = 0;
	int b = 0;

public :
	void add(int _a, int _b);
};

inline void base1:: add(int _a, int _b) {
	a = _a;
	b = _b;

	cout << a + b << endl;
}


//-------------------------------------------------------



class base2 : public base1 {
	int a1, b1;
public:
	void setdata(int _a1 , int _b1) {
		a1 = _a1;
		b1 = _b1;

	}
	friend void greatest(base2& b2);
};

void greatest(base2& b2) {
	(b2.a1 > b2.b1) ? cout << b2.a1 <<" is greatest"<<endl : cout<<b2.b1 << " is greatest" <<endl;
}

//----------------------------------------------------------------

class base3 : public base2
{
public:
	virtual void sub(int _a3, int _b3) = 0;
};


//------------------------------------------------------------


class base4 : public base3 {
public:
	void sub(int _a3, int _b3) {
		cout << (_a3 - _b3) << endl;
	}
};


//----------------------------


int main() {
	base4 b4;
	b4.add(2, 3);
	b4.setdata(10, 5);
	greatest(b4);
	b4.sub(8, 5);
}