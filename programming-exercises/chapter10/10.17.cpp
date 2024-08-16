/*
(The Location class) Design a class named Location for locating a maximal value and its location in a two-dimensional array. 
The class contains public data fields row, column, and maxValue that store the maximal value and
its indices in a two-dimensional array with row and column as int type and
maxValue as double type.

Write the following function that returns the location of the largest element in a
two-dimensional array. Assume that the column size is fixed.

const int ROW_SIZE = 3;
const int COLUMN_SIZE = 4;
Location locateLargest(const double a[][COLUMN_SIZE]);

The return value is an instance of Location. Write a test program that prompts
the user to enter a two-dimensional array and displays the location of the largest
element in the array. Here is a sample run:

Enter a 3-by-4 two-dimensional array:

23.5 35 2 10
4.5 3 45 3.5
35 44 5.5 9.6

The location of the largest element is 45 at (1, 2)
*/

const int ROW_SIZE = 3;
const int COLUMN_SIZE = 4;

class Location {
    public:
    const int row = 3;
    const int column = 4;
    double maxValue;
    
    Location(int r = 0, int c = 0, double maxV = 0.0) : row(r), column(c), maxValue(maxV) {};
};

Location locateLargest(const double a[][COLUMN_SIZE], int ROW_SIZE) {
    int maxRow = 0;
    int maxColumn = 0;
    double maxValue = a[0][0];

    for (int i = 0; i < ROW_SIZE; i++) {
        for (int j = 0; j < COLUMN_SIZE; j++) {
            if (a[i][j] > maxValue) {
                maxValue = a[i][j];
                maxRow = i;
                maxColumn = j;
            }
        }
    }

    return Location(maxRow, maxColumn, maxValue);
}