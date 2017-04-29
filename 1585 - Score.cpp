/*
    Afikur Rahman (afikur)
    UVA 1585
    Date: 01.03.17
*/

#include <iostream>
#include <cstdio>

using namespace std;

int CalcScore(string s) {
    int len, sum, n;
    len = s.length();
    sum = 0;
    n = 0;
    for(int i = 0; i < len; i++) {
        if(s[i] == 'O') {
            n++;
        }
        else {
            sum += (n * (n+1)) / 2.0;
            n = 0;
        }
    }
    if(n) {
        sum += (n * (n+1)) / 2.0;
    }

    return sum;
}

int main() {
    int testCase;
    string score;

    cin>>testCase;

    while(testCase--) {
        cin>>score;

        printf("%d\n", CalcScore(score));
    }
    return 0;
}
