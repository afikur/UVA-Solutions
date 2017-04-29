/*
    Afikur Rahman (afikur)
    UVA 12611
    Date: 10.02.17
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int testCase, kase;
    double r, length, width, left, right, center_width;

    while(cin>>testCase) {
        kase = 0;
        while(testCase--) {
            cin>>r;
            length = r * 5;
            width = length * 0.6;
            center_width = width / 2;
            left = length * .45;
            right = length * .55;

            printf("Case %d:\n", ++kase);
            printf("-%.lf %.lf\n", left, center_width);
            printf("%.lf %.lf\n", right, center_width);
            printf("%.lf -%.lf\n", right, center_width);
            printf("-%.lf -%.lf\n", left, center_width);
        }
    }
    return 0;
}

