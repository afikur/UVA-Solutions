/*
    Afikur Rahman (afikur)
    UVA 12626
    Date: 10.02.17
*/

#include <iostream>
using namespace std;

int main()
{
    int testCase, m, a, r, g, i, t, len, pizza;
    string s;

    cin>>testCase;
    cin.ignore();

    while( testCase-- ) {

        getline(cin,s);

        len = s.length();

        pizza = 0;
        m = 0; a = 0; r = 0; g = 0; i = 0; t = 0;

        for(int j=0; j<len; j++) {
            if(s[j] == 'M') m++;
            else if(s[j] == 'A') a++;
            else if(s[j] == 'R') r++;
            else if(s[j] == 'G') g++;
            else if(s[j] == 'I') i++;
            else if(s[j] == 'T') t++;
        }

        while(m >= 1 && a >= 3 && r >= 2 && g >= 1 && i >= 1 && t >= 1) {
            m -= 1;
            a -= 3;
            r -= 2;
            g -= 1;
            i -= 1;
            t -= 1;

            pizza++;
        }

        cout<<pizza<<endl;
    }

    return 0;
}
