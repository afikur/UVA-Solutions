#include <iostream>
#include <cmath>
using namespace std;

int skew_bin(string & s) {
    int len = s.length();
    int sum = 0;

    for(int i = 0, j = len; i < len; i++, j--) {
        sum += (s[i] - '0')*(pow(2, j) - 1);
    }
    return sum;
}

int main() {
    string s;
    while(cin >> s) {
        if(s == "0") break;
        cout << skew_bin(s) << endl;
    }

    return 0;
}
