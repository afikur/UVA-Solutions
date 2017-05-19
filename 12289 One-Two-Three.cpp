#include <iostream>
#include <string>
using namespace std;

int main() {
    int len;
    int n;
    string s;

    cin >> n;

    while(n--) {
        cin >> s;
        len = s.length();
        if(len == 3) {
            if((s[1] == 'n' && s[2] == 'e') || (s[0] == 'o' && s[1] == 'n') || s[1] == 'n' || (s[0] == 'o' && s[2] == 'e')) {
                cout << "1" << endl;
            }

            else if((s[0] == 't' && s[2] == 'o')|| s[1] == 'w' || s[2] == 'o') {
                cout << "2" << endl;
            }

            else if(s[0] == 's' || s[1] == 'i' || s[2] == 'x') {
                cout << "6" << endl;
            }
            else {
                cout << "10" << endl;
            }
        }
        else if(len == 4) {
            if((s[0] == 'f' && s[3] == 'r') || s[1] == 'o' || s[2] == 'u' || s[3] == 'r') {
                cout << "4" << endl;
            }
            else if((s[0] == 'f' && s[3] == 'e') || s[1] == 'i' || s[2] == 'v' || s[3] == 'e') {
                cout << "5" << endl;
            }
            else {
                cout << "9" << endl;
            }
        }
        else {
            if((s[0] == 's' && s[3] == 'e') || s[1] == 'e' || s[2] == 'v' || s[4] == 'n' || s[0] == 's') {
                cout << "7" << endl;
            }
            else if((s[0] == 't' && s[3] == 'e') || s[1] == 'h' || s[2] == 'r' || s[4] == 'e' || s[0] == 't') {
                cout << "3" << endl;
            }
            else {
                cout << "8" << endl;
            }
        }
    }
    return 0;
}
