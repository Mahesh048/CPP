#include <iostream>
using namespace std;

class abc {
public :
int sum(int a , int b){
	return a + b;
}
};

class def : public abc {
public :
	int sum(int a, int b, int c) {
		return a + b + c;
	}
};

int main() {
	def d;
	d.sum(2, 3);
	d.sum(2, 3, 4);
}