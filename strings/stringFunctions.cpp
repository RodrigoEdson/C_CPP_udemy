#include <iostream>
#include <stdio.h>
using namespace std;

char *readName()
{
    char *name;

    // C
    name = (char *)malloc(50 * sizeof(char));
    // C++
    // name = new char [50];

    printf("Enter your Name: ");
    scanf("%s", name);

        return name;
}

int validate(char *name)
{
    for (int i = 0; name[i] != '\0'; i++)
        if (!(name[i] >= 65 && name[i] <= 90) &&
            !(name[i] >= 97 && name[i] <= 122) &&
            !(name[i] >= 48 && name[i] <= 57))
        {
            printf("Invalid character '%c'\n", name[i]);
            return 0;
        }

    return 1;
}

void reverse(char *name)
{
    char temp;
    int j = 0;

    for (j = 0; name[j] != '\0'; j++)
    {
    }

    j--;

    for (int i = 0; i < j; i++, j--)
    {
        temp = name[i];
        name[i] = name[j];
        name[j] = temp;
    }
}

int main(int argc, char const *argv[])
{
    char *name = readName();

    printf("Name = %s\n", name);

    int valid = validate(name);
    if (valid)
        printf("Valid Name\n");
    else
        printf("Invalid Name\n");

    reverse(name);

    printf("Reverse name: %s\n", name);

    return 0;
}
