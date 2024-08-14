/*
(Common characters) Write a function that returns the common characters of two
strings using the following header:

string commonChars(const string& s1, const string& s2)

Write a test program that prompts the user to enter two strings and display their
common characters. Here are some sample runs:

Enter a string s1: abcd
Enter a string s2: aecaten

The common characters are ac

Enter a string s1: abcd
Enter a string s2: efg

No common characters
*/

#include <string>
#include <iostream>

using namespace std;

string commonChars(const string &s1, const string &s2)
{
    string t1 = s1;
    string t2 = s2;

    string result = "";



    for (char c : t1)
    {
        size_t pos = t2.find(c);
        if (pos != string::npos)
        {
            result += c;
            t2.erase(pos, 1);
        }
    }
    return result;
}

int main()
{
    string s1, s2;

    cout << "Enter a string s1 : ";
    cin >> s1;

    cout << "Enter a string s2: ";
    cin >> s2;

    string common = commonChars(s1, s2);

    if (!common.empty())
        cout << "The common characters are " << common << endl;
    else
        cout << "No common characters" << endl;

    return 0;
}