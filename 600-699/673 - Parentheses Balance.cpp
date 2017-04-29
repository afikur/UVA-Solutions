/*
    Afikur Rahman (afikur)
    UVA 673 - Parenthesis Balance
    Date: 07.03.17
*/

#include <iostream>
#include <stack>

using namespace std;

bool checkParanthesis(char opening, char closing);
bool balanceParanthesis(string s);

int main() {
    int n;
    string s;
    cin>>n;
    cin.ignore();

    while(n--) {
        getline(cin, s);
        if(s.empty())
            cout<<"Yes"<<endl;
        else
            balanceParanthesis(s) ? cout<<"Yes"<<endl : cout<<"No"<<endl;
    }

    return 0;
}


bool arePair(char opening, char closing) {
    if(opening =='(' && closing == ')') return true;
    else if(opening == '[' && closing == ']') return true;
    return false;
}

bool balanceParanthesis(string s) {
    int len;
    stack<char> c;

    len = s.length();

    for(int i=0; i<len; i++) {
        if(s[i] == '(' || s[i] == '[') {
            c.push(s[i]);
        } else if(s[i] == ')' || s[i] == ']') {
            if(!c.empty() && arePair(c.top(), s[i])) {
                c.pop();
            }
            else {
                return false;
            }
        }
    }
    return c.empty() ? true : false;
}
