//#include <iostream>
//using namespace std;
//
//class A {
//	int a;
//public : 
//	A (int _a){
//		a = _a;
//	}
//	friend int getterA(A& a1);
//	
//};
//
//int getterA(A& a1) {
//	return a1.a;
//}
//
//class B {
//	int b;
//public:
//	B(int _b) {
//		b = _b;
//	}
//	friend int getterB(B& b1);
//};
//
//int getterB(B& b1) {
//	return b1.b;
//}
//
//class C : public A,B
//{
//	int c;
//};
#include <iostream>
using namespace std;

class A {
private:
	int a;
public:
	A(int _a) : a(_a) {} // Using member initializer list
	friend int getterA(const A& a1); // Use const reference if getter doesn't modify
};

int getterA(const A& a1) {
	return a1.a;
}

class B {
private:
	int b;
public:
	B(int _b) : b(_b) {} // Using member initializer list
	friend int getterB(const B& b1); // Use const reference if getter doesn't modify
};

int getterB(const B& b1) {
	return b1.b;
}

class C : public A, public B
{
private:
	int c;
public:
	C(int _a, int _b, int _c) : A(_a), B(_b), c(_c) {}

	void findGreatest() {
		int valA = getterA(*this);
		int valB = getterB(*this);
		int valC = c;

		if (valA >= valB && valA >= valC) {
			cout << "A's value (" << valA << ") is the greatest." << endl;
		}
		else if (valB >= valA && valB >= valC) {
			cout << "B's value (" << valB << ") is the greatest." << endl;
		}
		else {
			cout << "C's value (" << valC << ") is the greatest." << endl;
		}
	}
};

int main() {
	C objC(10, 20, 30);
	objC.findGreatest();

	return 0;
}