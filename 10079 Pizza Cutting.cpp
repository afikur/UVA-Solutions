/*
    Afikur Rahman (afikur)
    UVA 10079 Pizza Cutting
    Date: 04.26.2017
*/
#include <iostream>
using namespace std;

int main() {
    long long int cut, pizza;

    while(cin >> cut) {
        if(cut < 0) break;
        else {
            pizza = (cut * (cut + 1) / 2) + 1;
            cout << pizza << endl;
        }
    }
    return 0;
}
