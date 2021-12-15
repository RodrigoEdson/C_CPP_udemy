#include <iostream>
using namespace std;

int length(char str[])
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
    }
    return i;
}

void toUpper(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
}

int main(int argc, char const *argv[])
{
    char str1[] = {'a', 'b', 'c', 'd', 'r'};
    char str2[5] = {'a', 'b', 'c', 'd', 'e'};
    char str3[5] = {97, 98, 99, 100, 101};
    char str4[5] = {'a', 'b'};
    
    char str[] = "weolcome";
    printf("str = %s\n", str);
    printf("Size of str = %d\n", length(str));

    toUpper(str);
    printf("upper(str) = %s\n", str);

    return 0;
}
