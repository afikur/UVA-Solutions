/*
    Afikur Rahman (afikur)
    UVA 12502
    Date: 10.02.17
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n;
    double a,b,c, dollar, total, avg;

    cin>>n;

    while(n--) {
        cin>>a>>b>>dollar;

        avg = (a + b) / 3;
        a -= avg;
        b -= avg;

        total = a + b;

        a = (dollar / total) * a;

        printf("%.0lf\n", a);
    }

    return 0;
}
