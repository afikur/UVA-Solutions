/*
    Afikur Rahman (afikur)
    UVA 10696
    Date: 10.02.17
*/

#include <iostream>
#include <cstdio>

using namespace std;

int f91(int n) {
    if(n < 101) return f91(f91(n+11));
    else return n - 10;
}

int main()
{
    int n;
    while(cin>>n) {
        if(! n) break;
        else printf("f91(%d) = %d\n", n, f91(n));
    }

    return 0;
}
