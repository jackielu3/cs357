/*
(Algebra: perfect square) Write a program that prompts the user to enter an
integer m and find the smallest integer n such that m * n is a perfect square.
(Hint: Store all smallest factors of m into a vector. n is the product of the factors
that appear an odd number of times in the vector. For example, consider m = 90,
store the factors 2, 3, 3, 5 in a vector. 2 and 5 appear an odd number of times in
the vector. So, n is 10.) Here are sample runs:

Enter an integer m: 1500
The smallest number n for m * n to be a perfect square is 15
m * n is 22500

Enter an integer m: 63
The smallest number n for m * n to be a perfect square is 7
m * n is 441
*/

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

// I'm looking for the smallest prime factors because the smallest factors are prime
vector<int> primeFactors(int m) {
    vector<int> factors;


    while (m % 2 == 0) {
        factors.push_back(2);
        m = m / 2;
        // cout << m << endl;
    }

    for (int i = 3; i <= sqrt(m); i += 2) {
        while (m % i == 0) {
            factors.push_back(i);
            m /= i;

            // cout << m << ", " << i << endl;
        }
    }

    // if m is prime
    if (m > 2) {
        factors.push_back(m);
    }

    /* debugging:
    for(int i = 0; i < factors.size(); ++i)
        cout << factors[i] << ',';
    cout << endl;
    */

    return factors;
}

int findSmallestN(int m) {
    vector<int> factors = primeFactors(m);
    // This is the vector that I will add all of the 
    vector<int> oddFactors;

    // Counts the number of times each factor is in the vector
    for (size_t i = 0; i < factors.size(); i++) {
        int count = 0;
        for (size_t j = 0; j < factors.size(); j++) {
            if (factors[i] == factors[j]) {
                count++;
            }
        }
        if (count % 2 != 0) {
            oddFactors.push_back(factors[i]);
        }
        // Remove all occurrences of this factor to prevent duplication
        factors.erase(remove(factors.begin(), factors.end(), factors[i]), factors.end());
        i = -1; // Reset index to start over after erase
    }

    // Calculating for n
    int n = 1;
    for (int factor : oddFactors) {
        n *= factor;
    }

    return n;
}

int main() {
    int m;
    cout << "Enter an integer m: ";
    cin >> m;

    int n = findSmallestN(m);

    cout << "The smallest integer n such that m * n is a perfect square is: " << n << endl;
    cout << "m * n = " << m * n << " which is a perfect square." << endl;

    return 0;
}