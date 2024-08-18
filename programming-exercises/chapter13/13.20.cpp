/*
(Decrypt files) Suppose a file is encrypted using the scheme in Programming
Exercise 13.19. Decode the file by subtracting the index of each byte from that
byte, for every byte. Write a program that reads the name of an encrypted file
and the name of an output file, and saves the decrypted version in the output file.
*/

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string inputFileName, outputFileName;

    cout << "Enter the file that you want to decrypt's name: ";
    cin >> inputFileName; // The file that I've made myself for testing is hello.txt
    cout << "Enter the output file name: ";
    cin >> outputFileName;

    ifstream inputFile(inputFileName, ios::binary);
    if (!inputFile) {
        cerr << "Error opening input file." << endl;
        return 1;
    }

    ofstream outputFile(outputFileName, ios::binary);
    if (!outputFile) {
        cerr << "Error opening output file." << endl;
        return 1;
    }

    char byte;
    int index = 0;

    while (inputFile.get(byte)) {
        char encryptedByte = byte - index;
        outputFile.put(encryptedByte);
        // cout << index << ": " << encryptedByte << endl;

        index++;
    }

    inputFile.close();
    outputFile.close();

    cout << "File encryption completed successfully!" << endl;

    return 0;
}
