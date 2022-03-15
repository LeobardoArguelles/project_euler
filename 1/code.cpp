/* PROJECT EULER - PROBLEM 1
 *  Author: Leobardo Argüelles
 *  Last edit: 15/03/2022
 */

// Libraries
#include <iostream>
#include <stdlib.h>

using namespace std;

// Naive approach
int main() {
    int rslt = 0;
    for(int i = 0; i < 1000; i++)
        rslt += (i % 3 == 0 || i % 5 == 0) ? i : 0;

    cout << rslt << endl;
    return 0;
}
