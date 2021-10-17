#include <iostream>

using namespace std;

class Calc
{
private:
    int a, b;

public:
    Calc();
    Calc(int a, int b);
    int add();
    int sub();
};

int main()
{
    Calc c;
    cout << "Add: " << c.add() << ", Sub: " << c.sub() << endl;

    Calc d(5, 8);
    cout << "Add: " << d.add() << ", Sub: " << d.sub() << endl;

    return 0;
}

//Class methods
Calc::Calc()
{
    this->a = this->b = 2;
}

Calc::Calc(int a, int b)
{
    this->a = a;
    this->b = b;
}

int Calc::add()
{
    int varAdded = this->a + this->b;
    return varAdded;
}

int Calc::sub()
{
    int varSub = this->a - this->b;
    return varSub;
}
