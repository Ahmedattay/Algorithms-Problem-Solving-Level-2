#include <iostream>
using namespace std;
int main()
{
    int Num;
    cout << "Enter a number: ";
    cin >> Num;
    int rem = 0;
    int count = 0;
    int RevNum;
    while (Num > 0)
    {
        rem = Num % 10;
        RevNum = +rem;
        Num /= 10;
        cout << RevNum;
    }
    return 0;
}