#include "10.17.cpp"
#include <string>
#include <iostream>

using namespace std;

int main() {
    double array[ROW_SIZE][COLUMN_SIZE];
    
    cout << "Enter a 3-by-4 two-dimensional array:" << endl;

    for (int i = 0; i < ROW_SIZE; i++) {
        for (int j = 0; j < COLUMN_SIZE; j++) {
            cin >> array[i][j];
        }
    }

    Location maxLoc = locateLargest(array, ROW_SIZE);

    cout << "The location of the largest element is " << maxLoc.maxValue << " at (" 
    << maxLoc.row << ", " << maxLoc.column << ")" << endl;
    
    return 0;
}