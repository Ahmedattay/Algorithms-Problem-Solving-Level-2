#include <iostream>
using namespace std;
int main()
{
    int Number;
    cout << "Enter a number: ";
    cin >> Number;
    int Sum = 0;
    for (int i = 1; i < Number; i++)
    {
        if (Number % i == 0)
            Sum += i;
    }
    if (Sum == Number)
    {
        cout << Number << " is a perfect number." << endl;
    }
    else
    {
        cout << Number << " is not a perfect number." << endl;
    }
    return 0;
}