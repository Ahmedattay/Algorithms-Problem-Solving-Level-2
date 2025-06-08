#include <iostream>
using namespace std;
int main()
{
    int Maxnum;
    cout << "Enter the maximum number of elements: ";
    cin >> Maxnum;
    for (int Num = 2; Num <= Maxnum; Num++)
    {

        bool isPrime = true;
        for (int i = 2; i < Num; i++)
        {
            if (Num % i == 0)
            {
                isPrime = false;
                    break;
            }

        }
        if (isPrime)
        {
            cout << Num << " ";
        }
    }
}
