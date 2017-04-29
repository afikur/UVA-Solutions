/*
    Afikur Rahman (afikur)
    UVA 12577
    Date: 10.02.17
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    string s;
    int counter = 0;

    while(cin >> s) {
        if(s == "*") break;
        if(s == "Hajj") printf("Case %d: Hajj-e-Akbar\n", ++counter);
        if(s == "Umrah") printf("Case %d: Hajj-e-Asghar\n", ++counter);
    }

    return 0;
}
