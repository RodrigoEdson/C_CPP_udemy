#include <iostream>

using namespace std;

void tailRecursion(int i)
{
    if (i >= 0)
    {
        cout << i;
        tailRecursion(i - 1);
    }
}

void headRecursion(int i)
{
    if (i >= 0)
    {
        headRecursion(i - 1);
        cout << i;
    }
}

void treeRecursion(int i)
{
    if (i >= 0)
    {
        cout << i;
        treeRecursion(i - 1);
        treeRecursion(i - 1);
    }
}

void indirectRecB(int i); // Declaration for B to allow its use in A

void indirectRecA(int i)
{
    if (i >= 0)
    {
        cout << " A:" << i;
        indirectRecB(i - 1);
    }
}

void indirectRecB(int i)
{
    if (i >= 0)
    {
        cout << " B:" << i;
        indirectRecA(i - 1);
    }
}

int nestedRecursion(int i)
{
    if (i > 0)
    {
        cout << i;
        return nestedRecursion(nestedRecursion(i - 1));
    }
    else
        return 0;
}

int main(int argc, char const *argv[])
{
    cout << "=========== Tail RECURSION ===========" << endl;
    tailRecursion(5);
    cout << endl
         << endl;
    cout << "=========== Head RECURSION ===========" << endl;
    headRecursion(5);
    cout << endl
         << endl;
    cout << "=========== Tree RECURSION ===========" << endl;
    treeRecursion(5);
    cout << endl
         << endl;
    cout << "========= Indirect RECURSION =========" << endl;
    indirectRecA(5);
    cout << endl
         << endl;
    cout << "=========== Nested RECURSION ==========" << endl;
    cout << nestedRecursion(5) << endl;
    cout << endl;
    return 0;
}
