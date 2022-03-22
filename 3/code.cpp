/* PROJECT EULER - PROBLEM 3
 *  Author: Leobardo Argüelles
 *  Last edit: 18/03/2022
 */

// Libraries
#include <iostream>
#include <stdlib.h>
#include <map>
#include <math.h>
#include <vector>

using namespace std;

#define N 600851475143

vector<int> sieve(vector<int> numbers);

int main() {
    // Variable declaration
    vector<int> primes;
    unsigned long int x = 1;
    float tmp = 0;

    // Generate all numbers that could divide N
    while(x < N/2)
        primes.push_back(++x);

    // Get only the primes
    primes = sieve(primes);

    for(auto i : primes)
        cout << i << endl;

    // Iterate in reverse to get the largest prime that divides N
    for (vector<int>::reverse_iterator i = primes.rbegin();
         i != primes.rend(); ++i ) {
        tmp = N/(*i);
        if (floor(tmp) == tmp) {
            cout << tmp << endl;
            break;
        }
    }

    return 0;
}

vector<int> sieve(vector<int> numbers) {
    long double num = *numbers.begin();
    long double tmp = 0;
    long double idx = 1;
    int x = 0;
    int size = 0;

    while(num < N) {
        x = *numbers.end();
        size = numbers.size();
        for(unsigned long int i = idx; i < size; i++) {
            tmp = numbers[i] / num;
            if(floor(tmp) == tmp) {
                numbers.erase(numbers.begin() + i);
                size--;
            }
        }
        num = numbers[idx++];
    }

    return numbers;
}
