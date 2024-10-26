#include <iostream>
using namespace std;

int main()
{
    char* name = new char [51];

    cin >> name;
    cout << name << "??!" << endl;

    delete[] name;
    
    return 0;
}