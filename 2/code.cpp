/* PROJECT EULER - PROBLEM 2
 *  Author: Leobardo Argüelles
 *  Last edit: 15/03/2022
 */

// Libraries
#include <iostream>
#include <stdlib.h>
#include <map>

using namespace std;

#define N 4000000

int fib(int n, map<int, int> &dic);

int main() {
    map<int, int> answers = {{1, 1}, {2, 2}};
    long long int rslt = 2;
    int tmp = 0;

    for(int i = 3; i < N; i++) {
        tmp = fib(i, answers);
        if(tmp > N)
            break;
        if ((tmp & 1) == 0)
            rslt += tmp;
    }

    cout << rslt << endl;

    return 0;
}

int fib(int n, map<int, int> &dic) {
    int prev1, prev2;
    int tmp = 0;

    prev1 = dic[n-1];
    prev2 = dic[n-2];
    tmp = prev1+prev2;
    dic[n] = tmp;

    return tmp;

}
