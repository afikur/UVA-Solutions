/*
    Afikur Rahman (afikur)
    UVA 10062
    Date: 09.02.17
*/

#include <iostream>
using namespace std;

int findMax(int *a) {
    int maximum = a[0];

    for(int i=1; i<128; i++) {
        if(maximum < a[i]) maximum = a[i];
    }
    return maximum;
}

int main()
{
    int a[128], len, maximum;
    string s;
    bool multiLine = false;

    while(getline(cin, s)) {
        for(int i=0; i<128; i++) a[i] = 0;

        len = s.length();

        for(int i=0; i<len; i++) {
            if(s[i] != '\n' || s[i] != '\r')
                a[(int) s[i]] += 1;
        }

        maximum = findMax(a);

        if(multiLine) cout<<endl;
        multiLine = true;

        for(int i=1; i <= maximum ; i++) {
            for(int j=127; j >= 32 ; j--) {
                if(a[j] == i) cout<<j<<" "<<i<<"\n";
            }
        }
    }

    return 0;
}
