#include <iostream>
using namespace std;
int main()
{
    int Num;
    cout << "Enter a number: ";
    cin >> Num;
    int rem = 0;
    int freq = 0;
    int FindDigit;
    cout << "Enter the digit to find the freq: ";
    cin >> FindDigit;
    while (Num > 0)
    {
        rem = Num % 10; // Get the last digit
        if (rem == FindDigit)
        {
            freq++; // Increment frequency if digit matches
        }
        Num = Num / 10; // Remove the last digit
    }
    cout << "The frequency of digit " << FindDigit << " is: " << freq << endl;
    return 0;
}