#include <iostream>
using namespace std;
int main()
{
    int multiplicationTable;
    cout << "Enter the multiplication table you want to print: ";
    cin >> multiplicationTable;
    cout << endl;
    cout << "\t";
    for (int i = 1; i <= multiplicationTable; i++)
    {
        cout << "\t" << i;
    }
    cout << endl;
    cout << "----------------------------------------------------------------------------------------------\n";
    for (int j = 1; j <= multiplicationTable; j++)
    {
        cout << j << "\t|";
        for (int i = 1; i <= multiplicationTable; i++)
        {
            cout << "\t" << j * i;
        }
        cout << "\n";
    }
    cout << "----------------------------------------------------------------------------------------------\n";
    return 0;
}