/*
    Afikur Rahman (afikur)
    UVA 11727
    Date: 15.02.17
*/

#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int main()
{
    int testCase,a,b,c;

    cin>>testCase;

    for(int k=1; k <= testCase; k++) {
        cin>>a>>b>>c;

        if(a > b) swap(a,b);
        if(b > c) swap (b,c);
        if(a > b) swap (a,b);

        printf("Case %d: %d\n", k, b);
    }

    return 0;
}
