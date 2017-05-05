/*Afikur Rahman (afikur) */

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int tc,i,n,k,p,bafana,shot;

    cin>>tc;

    for(i=1; i<=tc; i++) {

        cin>>n>>k>>p;

        if(p % n == 0) {
            bafana = k;
        } else {
            shot = p % n;
            shot += k;

            if(shot > n) {
                bafana = shot - n;
            }else {
                bafana = shot;
            }
        }

        printf("Case %d: %d\n",i,bafana);
    }

    return 0;
}
