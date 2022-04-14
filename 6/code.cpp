/* PROJECT EULER - PROBLEM 4
 *  Author: Leobardo Argüelles
 *  Last edit: 22/03/2022
 */

// Libraries
#include <iostream>
#include <stdlib.h>

#define START 2
#define END 20
using namespace std;

int SquareOfSum(int n);
int SumOfSquares(int n);

#define N 100

int main() {
    // Variable declaration

    cout << SquareOfSum(N) - SumOfSquares(N)<< endl;

    return 0;
}

int SquareOfSum(int n) {
    int x =(n + n*n) / 2;
    return x*x;
}

int SumOfSquares(int n) {
    return n*(n+1)*(2*n+1)/6;
}
