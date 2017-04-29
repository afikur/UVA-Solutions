/*
    Afikur Rahman (afikur)
    UVA 12015
    Date: 20.02.17
*/

#include <iostream>

using namespace std;

int findMax(int *a);

int main() {
    int testCase, a[10], maximum;

    string s[10];

    cin>>testCase;

    for(int k = 1 ; k <= testCase ; k++) {
        for(int i=0 ; i<10 ; i++) {
            cin>>s[i];
            cin>>a[i];
        }

        maximum = findMax(a);

        cout<<"Case #"<<k<<":"<<endl;

        for(int i=0 ; i<10 ; i++) {
            if(a[i] == maximum) {
                cout<<s[i]<<endl;
            }
        }
    }

    return 0;
}


int findMax(int *a) {
    int m = a[0];

    for(int i=1 ; i < 10 ; i++) {
        if(m < a[i]) m = a[i];
    }

    return m;
}
