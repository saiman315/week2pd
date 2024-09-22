#include <iostream>
using namespace std;

int main() 
{
    int number, sum;
    cout << "Enter a 4-digit number: ";
    cin >> number;
    sum = (number % 10) +         // Last digit
          ((number / 10) % 10) +  // Second last digit
          ((number / 100) % 10) +  // Third last digit
          ((number / 1000) % 10);   // First digit
    cout << "The sum of the digits is: " << sum << endl;

    return 0; // Exit the program successfully
}
