/*
    Afikur Rahman (afikur)
    UVA 11854
    Date: 13.02.17
*/

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    unsigned int a[3];

    while( cin >> a[0] >> a[1]  >> a[2] ) {
        if( ! a[0] && ! a[1] && ! a[2] ) break;

        sort(a, a+3);

        if(pow(a[0], 2) + pow(a[1], 2) == pow(a[2], 2)) {
            cout<<"right"<<endl;
        } else {
            cout<<"wrong"<<endl;
        }
    }

    return 0;
}
