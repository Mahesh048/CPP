

#include <iostream>
#include <fstream>
using namespace std;

template <class T>
class Calculator {
public:
    T num1, num2 , a;

public:
    void getdata() {
        num1 = 55;
        num2 = 45;
    }
    void displayResult(ofstream& file) {
        a = 55;
       
        file << "Numbers: " << num1 << " and " << num2 << endl;
        file << num1 << " + " << num2 << " = " << add() << endl;
        file << num1 << " / " << num2 << " = " << divide() << endl;
        file << num1 << " - " << num2 << " = " << subtract() << endl;
        file << num1 << " * " << num2 << " = " << multiply() << endl;
    }

    T add() {

       int num3= num1 + num2;
        return num3;
    }
    T subtract() { return num1 - num2; }
    T multiply() { return num1 * num2; }
    T divide() { return num1 / num2; }
};

int main() {
    Calculator<int> intCac;
    intCac.getdata();
   
    char op;
    ofstream file("C:/Users/DAC-User30/Desktop/Assignments/Calculator.txt");
    intCac.displayResult(file);
    do
    {
        file<<"Int result : " << endl; 
        //intCac.displayResult(file);//
        file.write((char*)&intCac, sizeof(intCac));
        cout << "Data Stored.." << endl;
        cout << "Anymore Data...?" << endl;
        cin >> op;
    } while (op == 'y' || op == 'Y');
    

}