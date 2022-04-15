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
// #define MAX 100000
#define MAX 2000000

vector<unsigned long long int> sieve(vector<unsigned long long int> numbers);

int main() {
    // Variable declaration
    vector<unsigned long long int> primes;
    unsigned long long int x = 3;

    // Start with the first prime: 2
    primes.push_back(2);

    // Generate all numbers that could divide N
    while(x < MAX) {
        // cout << x << endl;
        primes.push_back(x);
        x += 2;
    }

    primes = sieve(primes);

    for(auto x : primes)
        cout << x << endl;

    return 0;
}

vector<unsigned long long int> sieve(vector<unsigned long long int> numbers) {
    unsigned long long int num = numbers[1];
    unsigned long long int idx = 2;
    unsigned long long int size = 0;
    int change = 1;

    while(change) {
        // cout << num << endl;
        change = 0;
        size = numbers.size();
        for(unsigned long long int i = idx; i < size; i++) {
            if((numbers[i] % num == 0)) {
                change = 1;
                numbers.erase(numbers.begin() + i);
                size--;
            }
        }
        num = numbers[idx++];
    }

    return numbers;
}
