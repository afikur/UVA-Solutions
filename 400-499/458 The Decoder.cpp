/*
    Afikur Rahman (afikur)
    UVA 401
    Date: 08.02.17
*/

#include <iostream>

using namespace std;

int main()
{
    string s;

    while(getline(cin, s)) {
        int len = s.length();
        for(int i=0 ; i<len; i++) {
            cout<<(char) ((int)s[i] - 7);
        }
        cout<<"\n";
    }

    return 0;
}
