#include <iostream>
using namespace std;
class Diagonal
{
private:
    int *matrix;
    int size;

public:
    Diagonal(int matrixSize)
    {
        this->size = matrixSize;
        this->matrix = new int[matrixSize];
    }

    ~Diagonal()
    {
        delete[] this->matrix;
    }

    void setElement(int i, int j, int value);
    int getElemente(int i, int j);
    void display();
};

void Diagonal::setElement(int i, int j, int value)
{
    if (i == j)
        this->matrix[i - 1] = value;
}

int Diagonal::getElemente(int i, int j)
{
    if (i == j)
        return this->matrix[i - 1];
    return 0;
}

void Diagonal::display()
{
    for (int i = 0; i < this->size; i++)
    {
        for (int j = 0; j < this->size; j++)
        {
            if (i == j)
                cout << this->matrix[i] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    Diagonal d(4);

    d.setElement(1, 1, 10);
    d.setElement(2, 2, 12);
    d.setElement(3, 3, 26);
    d.setElement(4, 4, 32);

    d.display();

    return 0;
}
