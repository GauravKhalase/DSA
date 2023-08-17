#include <iostream>
using namespace std;

void studentGrade(int m)
{
    if (m >= 90)
    {
        cout << "A Grade" << endl;
    }
    else if (m >= 80)
    {
        cout << "B Grade" << endl;
    }
    else if (m >= 70)
    {
        cout << "C Grade" << endl;
    }
    else if (m >= 60)
    {
        cout << "D Grade" << endl;
    }
    else
    {
        cout << "Fail" << endl;
    }
}

int main()
{
    int m;
    cout << "Enter the marks:" << endl;
    cin >> m;
    studentGrade(m);
    cout << "action Completed";
}