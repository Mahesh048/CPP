#include <iostream>
using namespace std;

int main() {
	int size;
	cin >> size;

	const int array_size = size;

	int* arr= new int  [array_size];

	for (int i = 0; i < size; i++)
		cin >> arr[i];

	for (int i = 0; i < size; i++)
		cin>> arr[i];

	return 0;
}