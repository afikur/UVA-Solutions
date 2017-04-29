/*
    Afikur Rahman (afikur)
    UVA 11734
    Date: 15.02.17
*/

#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

string format(string s);

int main()
{
    int testCase;

    string s1, s2;

    cin>>testCase;

    cin.ignore();

    for(int k = 1 ; k <= testCase ; k++) {
        getline(cin, s1);
        getline(cin, s2);

        if(s2 == s1) printf("Case %d: Yes\n", k);
        else if(s2 == format(s1)) printf("Case %d: Output Format Error\n", k);
        else if(s2 != format(s1)) printf("Case %d: Wrong Answer\n", k);
    }

    return 0;
}


string format(string s) {
    int len = s.length();
    string temp;

    for(int i=0, j=0; i<len; i++) {
        if(s[i] != ' '){
            temp.append(1, s[i]);
            j++;
        }
    }

    return temp;
}
