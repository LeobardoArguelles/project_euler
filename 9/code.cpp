/* PROJECT EULER - PROBLEM 8
 *  Author: Leobardo Argüelles
 *  Last edit: 13/04/2022
 */

// Libraries
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main() {
    // Variable declaration
    int a = 1, b = 1;
    float c = 0;

    // Infinite loop till we find it!
    // Just brute force it
    while(1) {
        if(a == 1000) {
            a = 1;
            b++;
        }
        else
            a++;

        // c
        c = sqrt(a*a + b*b);

        // check if c is int
        if(floor(c) == c) {
            if(a + b + c == 1000) {
                cout << "a: " << a << endl;
                cout << "b: " << b << endl;
                cout << "c: " << c << endl;
                cout << fixed << setprecision(20) << "Product: " << a*b*c << endl;
                break;
            }
        }
    }
    return 0;
}
