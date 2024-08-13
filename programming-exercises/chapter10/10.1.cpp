/*
(Anagrams) Write a function that checks whether two words are anagrams. Two
words are anagrams if they contain the same letters in any order. For example,
“silent” and “listen” are anagrams. The header of the function is as follows:

bool isAnagram(const string& s1, const string& s2)
Write a test program that prompts the user to enter two strings and checks whether
they are anagrams. Here are sample runs:

Enter a string s1: silent
Enter a string s2: listen

silent and listen are anagrams

Enter a string s1: split
Enter a string s2: lisp

split and lisp are not anagrams
*/

#include <string>
#include <iostream>

using namespace std;

bool isAnagram(const string& s1, const string& s2) {
    string t1 = s1;
    string t2 = s2;

    for (int i = 0; i < t1.size(); i++) {
        if (t2[0] == t1[i]) {
            if (t1.size() == 1) {
                return true;
            }

            cout << "Being Removed: " << t2[0] << endl;

            t1.erase(i, 1);
            t2.erase(0, 1);
            return isAnagram(t1, t2);
        }
    }
    return false;
}

int main() {
    string s1, s2;

    cout << "Enter a string s1 : ";
    cin >> s1;

    cout << "Enter a string s2: ";
    cin >> s2;

    if (isAnagram(s1, s2)) 
        cout << s1 << " and " << s2 << " are anagrams" << endl;
    else 
        cout << s1 << " and " << s2 << " are not anagrams" << endl;

    return 0;
}