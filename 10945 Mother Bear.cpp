/*
    Afikur Rahman (afikur)
    UVA 10945
    Date: 20.02.17
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string format(string s);
bool palindrome(string s);

int main() {
    string s;

    while(getline(cin,s)) {
        if(s == "DONE") break;

        s = format(s);

        if(palindrome(s)) cout<<"You won't be eaten!"<<endl;
        else cout<<"Uh oh.."<<endl;
    }
    return 0;
}


string format(string s) {
    int len;
    string str;

    len = s.length();

    for(int i=0; i<len; i++) {
        if(s[i] >= 'a' && s[i] <= 'z') {
            str.append(1,s[i]);
        }
        else if(s[i] >= 'A' && s[i] <= 'Z') {
            str.append(1, char((int)s[i] + 32));
        }
    }

    return str;
}


bool palindrome(string s) {
    string str = s;

    reverse(s.begin(), s.end());

    return (str == s);
}
