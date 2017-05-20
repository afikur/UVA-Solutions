#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int t,i,j,len,press;
    string s;
    int p[26] = { 1,2,3,
                1,2,3,
                1,2,3,
                1,2,3,
                1,2,3,
                1,2,3,4,
                1,2,3,
                1,2,3,4
    };


    cin>>t;
    cin.ignore();
    for(i=1;i<=t; i++) {
        press = 0;
        getline(cin,s);
        len = s.length();

        for(j=0; j<len; j++) {
            if(s[j] == ' ') press += 1;
            else
                press += p[s[j] - 'a'];
        }

        printf("Case #%d: %d\n",i,press);
    }

    return 0;
}
