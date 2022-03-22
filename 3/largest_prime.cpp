/* PROJECT EULER - PROBLEM 3
 *  Author: Leobardo Argüelles
 *  Last edit: 18/03/2022
 */

// Libraries
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <fstream>

using namespace std;

#define N 600851475143
// #define N 10000

int main() {
    // Variable declaration
    float tmp = 0;
    string line;
    int n = 0;
    unsigned long long int goal = N;
    ifstream File("primes.txt");

    while(getline (File, line)) {
        n = stoi(line);
        while(goal % n == 0) {
            goal /= n;
            cout << "Dividing by " << n << ". Result: " << goal << endl;
        }
    }


    File.close();
    return 0;
}
