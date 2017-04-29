/*
    Afikur Rahman (afikur)
    UVA 401
    Date: 08.02.17
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool palindrome(string s) {
    string temp = s;

    std::reverse(temp.begin(), temp.end());

    return s == temp ? true : false;
}

bool mirror(string str) {

    string s = str;

    reverse(s.begin(), s.end());

    int len = s.length();

    bool noViolation = true;

    for(int i = 0 ; i < len ; i++) {
        switch(s[i]) {
            case 'B':
            case 'C':
            case 'D':
            case 'F':
            case 'G':
            case 'K':
            case 'N':
            case 'P':
            case 'Q':
            case 'R':
            case '4':
            case '6':
            case '7':
            case '9':
                noViolation = false;
                break;
            case 'E':
                s[i] = '3';
                break;
            case '3':
                s[i] = 'E';
                break;

            case 'J':
                s[i] = 'L';
                break;
            case 'L':
                s[i] = 'J';
                break;

            case 'S':
                s[i] = '2';
                break;
            case '2':
                s[i] = 'S';
                break;

            case '5':
                s[i] = 'Z';
                break;
            case 'Z':
                s[i] = '5';
                break;
        }
    }
    return noViolation && (str == s) ? true : false;
}

int main()
{
    string s;

    while(cin>>s) {
        if(palindrome(s) && mirror(s)) cout<<s<<" -- is a mirrored palindrome."<<"\n"<<"\n";
        else if(palindrome(s)) cout<<s<<" -- is a regular palindrome."<<"\n"<<"\n";
        else if(mirror(s)) cout<<s<<" -- is a mirrored string."<<"\n"<<"\n";
        else cout<<s<<" -- is not a palindrome."<<"\n"<<"\n";
    }

    return 0;
}
