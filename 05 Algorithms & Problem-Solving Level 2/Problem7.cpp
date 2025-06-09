#include <iostream>
using namespace std;
int main()
{
    int Num;
    cout << "Enter a number: ";
    cin >> Num;
    int rem = 0;
    cout << "The digits of the number in reverse order are: " << endl;
    // Loop to extract and print each digit in reverse order
    while (Num > 0)
    {
        rem = Num % 10;
        Num /= 10;
        cout << rem;
    }
    return 0;
}