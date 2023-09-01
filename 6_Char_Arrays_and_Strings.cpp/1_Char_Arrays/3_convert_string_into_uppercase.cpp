#include <iostream>
#include <string.h>
using namespace std;

char convertIntoUppercase(char ch[])
{
    int n = strlen(ch);
    for (int i = 0; i < n; i++)
    {
        ch[i] = ch[i] - 'a' + 'A';
    }
}

int main()
{
    char ch[100];
    cin >> ch;
    convertIntoUppercase(ch);
    cout << ch << endl;
    return 0;
}