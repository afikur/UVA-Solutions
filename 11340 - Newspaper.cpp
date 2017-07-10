/*
    Afikur Rahman (afikur)
    Date: 10-Jul-2017
*/
#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int i, t, n1, n2, val;
    long long sum;
    long long char_val[256];
    char ch;
    string s;

    cin >> t;

    while(t--) {
        for(i = 0; i < 256; i++) {
            char_val[i] = 0;
        }

        sum = 0;
        cin >> n1;
        while(n1--) {
            cin >> ch >> val;
            char_val[(int)ch+128] = val;
        }

        cin >> n2;
        cin.ignore();
        while(n2--) {
            getline(cin, s);
            for(i = 0; s[i] != '\0'; i++) {
                sum += char_val[(int)s[i]+128];
            }
        }
        //sum = sum / 100;
        printf("%lld.%02lld$\n", sum/100, sum%100);

        for(i = 0; i < 256; i++) {
            char_val[i] = 0;
        }
    }

    return 0;
}

