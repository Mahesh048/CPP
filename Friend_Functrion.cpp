#include<iostream>

using namespace std;

class one
{
    int a;
public:
    friend void cal(one a);

};
class two
{
    int b;
public:
    friend void cal(one a, two b);

};

void cal(int f, int g)
{
    cout<<"Greatest : "<<(f > g ? f : g);
}
int main()
{
    one x;
    two y;
    cal(10, 20);
}