#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int rem = 0;
    cout << "The digits of the number are: " << endl;
    // Loop to extract and print each digit
    while (num >= 0)
    {
        rem = num % 10;
        num = num / 10;
        cout << rem << endl;
        if (num == 0)
        {
            cout << "No more digits left." << endl;
            break;
        }
    }
    return 0;
}