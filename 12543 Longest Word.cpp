/*
    Afikur Rahman (afikur)
    UVA 12543
    Date: 10.02.17
*/

#include <iostream>

using namespace std;

string strToLower(string s) {
    int len = s.length();

    for(int i=0; i<len; i++) {
        if(s[i] >= 'A' && s[i] <= 'Z') s[i] = (char) ((int) s[i] + 32);
    }

    return s;
}

int main()
{
    string s, word;
    int longest = 0, len;

    while(cin>>s) {
        if(s == "E-N-D") break;

        len = s.length();

        if (longest < len) {
            longest = len;
            word = s;
        }
    }

    word = strToLower(word);

    for(int i=0; i<longest; i++) {
        if( (word[i] >= 'a' && word[i] <= 'z') || word[i] == '-') cout<<word[i];
    }

    cout<<endl;

    return 0;
}
