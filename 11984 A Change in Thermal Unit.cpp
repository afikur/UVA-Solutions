/*
    Afikur Rahman (afikur)
    UVA 11984
    Date: 21.02.17
*/

#include <iostream>
#include <cstdio>

using namespace std;

double ftc (double f);

int main() {
    int testCase;
    double c, d;

    cin>>testCase;

    for(int i=1; i<=testCase ; i++) {
        cin>>c>>d;

        printf("Case %d: %.2lf\n",i, c + ftc(d) - ftc(0));
    }

    return 0;
}

double ftc(double f) {
    return (5 *(f-32))/9;
}
