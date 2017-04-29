/*
    Afikur Rahman (afikur)
    UVA 113
    Date: 07.02.17
*/

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;


int main ()
{
    double p, n;

    while(cin>>n>>p) {
        printf("%.0lf\n", pow(p, 1.0/n));
    }

    return 0;
}
