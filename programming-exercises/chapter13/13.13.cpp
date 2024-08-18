/*
(Write/Read: binary data file) Write a program that creates a binary file
Exercise13_13.dat and prompts the user to write data to it. The program then
reads the written data from the file and displays it back.
*/

// I chose to use integers as the type of data to write

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    string filename = "Exercise13_13.dat";

    ofstream outFile(filename, ios::binary);
    if (!outFile) {
        cerr << "Error opening file for writing." << endl;
        return 1;
    }

    cout << "Enter integers to write to the file (enter -1 to stop): " << endl;
    int num;
    vector<int> numbers;

    while (true) {
        cout << "Enter an integer: ";
        cin >> num;
        if (num == -1) {
            break;
        }
        numbers.push_back(num);
    }

    for (int n : numbers) {
        outFile.write(reinterpret_cast<const char*>(&n), sizeof(n)); // cast was pulled from gpt, was stuck at how to cast an int to a char for far too long
    }

    outFile.close();

    ifstream inFile(filename, ios::binary);
    if (!inFile) {
        cerr << "Error opening file for reading." << endl;
        return 1;
    }

    cout << "Data read from the file:" << endl;
    while (inFile.read(reinterpret_cast<char*>(&num), sizeof(num))) {
        cout << num << " ";
    }
    cout << endl;

    inFile.close();

    return 0;
}
