/*
    Afikur Rahman (afikur)
    UVA 12578
    Date: 10.02.17
*/

#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main () {
    int testCase, L;
    double pi = acos(-1);
    double W, r, rect, cir;

    cin>>testCase;

    while(testCase--) {

        cin>>L;

        W = L * .6;
        r = L * .2;

        cir = pi * r * r;

        rect = (L * W) - cir;

        printf("%.2lf %.2lf\n", cir, rect);
    }

    return 0;
}
