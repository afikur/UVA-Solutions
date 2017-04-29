/*
    Afikur Rahman (afikur)
    UVA 12459 Bee's ancestors
    Date: 26.04.2017
*/
#include <iostream>
using namespace std;

long long int ancestor[81];

long long int bee(int n) {
    ancestor[1] = 1;
    ancestor[2] = 2;
    if(ancestor[n] != 0) {
        return ancestor[n];
    }
    else {
        ancestor[n] = bee(n-1) + bee(n-2);
        return ancestor[n];
    }
}

int main() {
    int n;
    while(cin >> n && n != 0) {
        cout << bee(n) << endl;
    }
    return 0;
}
