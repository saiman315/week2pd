#include <iostream>
using namespace std;

int main() {
    
    float num1, num2, num3, num4, num5;
    float num6, num7, num8, num9, num10;
    float num11, num12, num13, num14, num15;
    cout << "Enter 15 numbers, one at a time:" << endl;
    cout << "Number 1: "; cin >> num1;
    cout << "Number 2: "; cin >> num2;
    cout << "Number 3: "; cin >> num3;
    cout << "Number 4: "; cin >> num4;
    cout << "Number 5: "; cin >> num5;
    cout << "Number 6: "; cin >> num6;
    cout << "Number 7: "; cin >> num7;
    cout << "Number 8: "; cin >> num8;
    cout << "Number 9: "; cin >> num9;
    cout << "Number 10: "; cin >> num10;
    cout << "Number 11: "; cin >> num11;
    cout << "Number 12: "; cin >> num12;
    cout << "Number 13: "; cin >> num13;
    cout << "Number 14: "; cin >> num14;
    cout << "Number 15: "; cin >> num15;
    float sum = num1 + num2 + num3 + num4 + num5;
    float product = num6 * num7 * num8 * num9 * num10;
    float subtraction = num11 - num12 - num13 - num14 - num15;
    float finalResult = (sum + product) - subtraction;
    cout << "The ultimate result is: " << finalResult << endl;

}