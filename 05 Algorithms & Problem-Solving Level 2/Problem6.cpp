#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int rem = 0;
    int sum = 0;
    // Loop to extract and print each digit
    while (num > 0)
    {
        rem = num % 10;
        num = num / 10;
        sum += rem; // Add the digit to the sum
    }
    cout << "The sum of the digits is: " << sum << endl; // Print the sum of the digits
    return 0;
}