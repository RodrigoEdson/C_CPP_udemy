#include <iostream>

using namespace std;

template <class T>
class Calc
{
private:
    T a, b;

public:
    Calc(T a, T b);
    ~Calc();
    T add();
    T sub();
};

int main()
{
    Calc<float> c(4.6, 3.7);
    cout << "Add: " << c.add() << ", Sub: " << c.sub() << endl;

    Calc<long> d(5, 8);
    cout << "Add: " << d.add() << ", Sub: " << d.sub() << endl;

    return 0;
}

//Class methods
template <class T>
Calc<T>::Calc(T a, T b)
{
    this->a = a;
    this->b = b;
    cout << "Create Object ()" << endl;
}

template <class T>
T Calc<T>::add()
{
    T varAdded = this->a + this->b;
    return varAdded;
}

template <class T>
T Calc<T>::sub()
{
    T varSub = this->a - this->b;
    return varSub;
}

template <class T>
Calc<T>::~Calc()
{
    cout << "Delete Object" << endl;
}
