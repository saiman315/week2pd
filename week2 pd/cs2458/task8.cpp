#include <iostream>
using namespace std;

int main() 
{
    int number, sum;
    cout << "Enter a 4-digit number: ";
    cin >> number;
    sum = (number % 10) +         
          ((number / 10) % 10) +  
          ((number / 100) % 10) +  
          ((number / 1000) % 10);   
    cout << "The sum of the digits is: " << sum << endl;

    
}
