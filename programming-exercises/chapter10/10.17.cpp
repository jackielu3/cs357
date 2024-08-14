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

class Location {
    public:
    int row;
    int colummn;
    double maxValue;
    
    Location locateLargest(const double a[][COLUMN_SIZE]) {

    }
};

const int ROW_SIZE = 3;
const int COLUMN_SIZE = 4;
Location locateLargest(const double a[][COLUMN_SIZE]);