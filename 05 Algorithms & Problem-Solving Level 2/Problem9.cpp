#include <iostream>
using namespace std;
int main()
{
    int Num;
    cout << "Enter a number: ";
    cin >> Num;
    int rem = 0;
    int freq = 0;
    int TempNum = 0;
    int NeedNum = 0;
    for (int i = 0; i < 10; i++)
    {
        TempNum = Num; // Reset TempNum for each digit
        while (TempNum > 0)
        {
            rem = TempNum % 10; // Get the last digit
            if (rem == i)
            {
                freq++; // Increment frequency if digit matche
            }
            TempNum /= 10; // Remove the last digit
        }
        if (freq > 0)
        {
            cout << "The frequency of digit " << i << " is: " << freq << endl;
        }
        freq = 0; // Reset frequency for the next digit
    }
}