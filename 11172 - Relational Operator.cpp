/*
    Afikur Rahman (afikur)
    UVA 11172
    Date: 18.02.17
*/

#include <iostream>

using namespace std;

int main() {
    int testCase, a, b;
    cin>>testCase;

    while(testCase--) {
        cin>>a>>b;

        if (a > b) cout << ">"<< endl;
        else if (a < b) cout << "<" << endl;
        else cout << "=" << endl;
    }

    return 0;
}
