/*
    Afikur Rahman (afikur)
    UVA 11946 Code Number
    Date: 26.04.2017
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    int testCase;
    string s;
    cin >> testCase;
    cin.ignore();
    while(testCase) {
        getline(cin, s);
        if(s == "") {
            testCase--;
            if(testCase) cout << endl;
        } else {
            int len = s.length();
            for(int i = 0; i < len ; i++) {
                if(s[i] == '3') cout << "E";
                else if(s[i] == '0') cout << "O";
                else if(s[i] == '1') cout << "I";
                else if(s[i] == '4') cout << "A";
                else if(s[i] == '9') cout << "P";
                else if(s[i] == '8') cout << "B";
                else if(s[i] == '5') cout << "S";
                else if(s[i] == '7') cout << "T";
                else if(s[i] == '2') cout << "Z";
                else if(s[i] == '6') cout << "G";
                else cout << s[i];
            }
            cout << endl;
        }
    }
    return 0;
}
