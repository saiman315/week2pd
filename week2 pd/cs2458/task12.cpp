#include <iostream>
using namespace std;

int main() {
    
    int n; 
    int w;
    int h; 
    cout << "Enter the amount of paint (in square meters): ";
    cin >> n;
    cout << "Enter the width of a wall (in meters): ";
    cin >> w;
    cout << "Enter the height of a wall (in meters): ";
    cin >> h;
    int wallArea = w * h;
    int completeWalls = n / wallArea;
    cout << "You can paint " << completeWalls << " complete walls." << endl;

    
}
