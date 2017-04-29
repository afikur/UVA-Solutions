/*
    Afikur Rahman (afikur)
    UVA 11875
    Date: 24.02.17
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int t,n,i,j;

    scanf("%d", &t);

    for(i=1; i<=t; i++) {
        scanf("%d", &n);
        int p[n];
        for(j=0;j<n;j++) {
            scanf("%d", &p[j]);
        }

        printf("Case %d: %d\n",i,p[n/2]);
    }
    return 0;
}
