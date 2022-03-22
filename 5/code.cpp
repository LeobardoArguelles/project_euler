/* PROJECT EULER - PROBLEM 4
 *  Author: Leobardo Argüelles
 *  Last edit: 21/03/2022
 */

// Libraries
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include<bits/stdc++.h>

#define START 2
#define END 20
using namespace std;

int main() {
    // Variable declaration
    int n = 11;
    int done = 0;

    while(1) {
        done = 1;
        for(int i = START; i <= END; i++) {
            if(n % i == 0)
                continue;
            else {
                done = 0;
                break;
            }
        }
        if (done)
            break;
        n++;
    }
    cout << n << endl;

    return 0;
}
