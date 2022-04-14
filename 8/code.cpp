/* PROJECT EULER - PROBLEM 8
 *  Author: Leobardo Argüelles
 *  Last edit: 13/04/2022
 */

// Libraries
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#define N 13

using namespace std;

std::string toString(__int128 num);

int main() {
    // Variable declaration
    // Prevent overflow!!!
    unsigned __int128 max = 0;
    unsigned __int128 x = 1;
    int tmpN = 0;
    ifstream f("data.txt");
    string line, tmp, maxS;

    // Get all numbers in a single string nice and neat
    while(getline (f, tmp)) {
        line.append(tmp);
    }

    // Get the product for the first N numbers, as baseline
    tmp = line.substr(0, N);
    for(char c : tmp)
        x *= c - '0';
    max = x;

    // Search for the answer
    for(int i = N; i < line.size(); i++) {
        tmpN = line[i] - '0';
        if(tmpN == 0) {
            // Can't divide by zero, so every sequence with this
            // number is useless.
            // Skip it until there are no more zeroes in the sequence.
            do {
                x = 1;
                for(int j = 1; j <= N; j++) {
                    if(i+j == line.size())
                        break;
                    x *= line[i+j] - '0';
                }
                i += N;
            } while(x == 0 && i < line.size());
        }
        else
            // Sliding window technique
            x = x * tmpN / line[i-N] - '0';

        // Save the maximum
        if (x > max) {
            tmp = line.substr(i-N+1, N);
            if(tmp.find("0") == string::npos) {
                // Don't consider anything that has 0 in it
                max = x;
                maxS = tmp;
            }
        }
    }

    // Print results
    cout << "Max string is: " << maxS << endl;
    cout << "Its product is: " << toString(max) << endl;

    // Cleanup
    f.close();

    return 0;
}

// Transform that large large number to a printable string.
std::string toString(__int128 num) {
    std::string str;
    do {
        int digit = num % 10;
        str = std::to_string(digit) + str;
        num = (num - digit) / 10;
    } while (num != 0);
    return str;
}
