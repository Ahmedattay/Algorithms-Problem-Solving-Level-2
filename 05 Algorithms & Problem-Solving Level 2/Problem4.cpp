#include <iostream>
using namespace std;
int main()
{
    int MaxNUm;
    cout << "Enter the maximum number: ";
    cin >> MaxNUm;
    int Sum = 0;
    cout << "Perfect numbers up to " << MaxNUm << " are:" << endl;
    for (int i = 1; i < MaxNUm; i++)
    {
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
                Sum += j;
        }
        if (Sum == i)
            cout << i << endl;
        Sum = 0; // Reset Sum for the next number
    }
}