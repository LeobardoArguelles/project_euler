/* PROJECT EULER - PROBLEM 8
 *  Author: Leobardo Argüelles
 *  Last edit: 13/04/2022
 */

// Libraries
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>

using namespace std;

int main() {
    // Variable declaration
    ifstream f("primes.txt"); // primes has all primes up to 2 million
    string prime;
    unsigned long long int sum = 0;
    unsigned long long int prev = 0;

    while(getline (f, prime)) {
        sum += stoi(prime);
        // Watch out for overflows
        if(prev > sum) {
            cout << "Overflow detected!" << endl;
            break;
        }
        prev = sum;
    }

    cout << "Sum: " << sum << endl;

    f.close();

    return 0;
}
