/* PROJECT EULER - PROBLEM 4
 *  Author: Leobardo Argüelles
 *  Last edit: 21/03/2022
 */

// Libraries
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include<bits/stdc++.h>

#define TRUE 1
#define FALSE 0
#define START 999

using namespace std;

int isPalindrome(int n);

int main() {
    // Variable declaration
    int x = START;
    int y = START;
    int rslt = 0;
    int max = 0;

    while(x > 0) {
        rslt = x*y;
        // cout << x << " * " << y << " = " << rslt << endl;
        if(isPalindrome(rslt)) {
            if (rslt > max)
                max = rslt;
        }
        if(y == 99) {
            y = START;
            x--;
        }
        else
            y--;
    }

    cout << max << endl;

    return 0;
}

int isPalindrome(int n) {
    string str = to_string(n);
    int idx1 = 0;
    int idx2 = 0;
    int len = str.length();

    // If len/2 is odd, idx2 will floor it.
    idx2 = len/2;
    if(len % 2 == 0)
        idx1 = idx2 - 1;
    else
        idx1 = idx2;

    while(idx1 >= 0) {
        if (str[idx1--] != str[idx2++])
            return FALSE;
    }
    return TRUE;
}
