/*
    Afikur Rahman (afikur)
    UVA 256
    Date: 07.02.17
*/

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int n;

    while(cin>>n) {

        if(n == 2) {
            for(int i=0; i<=9; i++) {
                for(int j=0 ; j<=9; j++) {
                    if((i+j)*(i+j) == i*10+j) {
                        printf("%d%d\n", i, j);
                    }
                }
            }
        }

        else if(n == 4) {
            for(int i=0; i<=99; i++) {
                for(int j=0 ; j<=99; j++) {
                    if( (i+j)*(i+j) == i*100+j ) {
                        printf("%02d%02d\n", i, j);
                    }
                }
            }
        }

        else if(n == 6) {
            for(int i=0; i<=999; i++) {
                for(int j=0 ; j<=999; j++) {
                    if( (i+j)*(i+j) == i*1000+j ) {
                        printf("%03d%03d\n", i, j);
                    }
                }
            }
        }

        else if(n == 8) {
            for(int i=0; i<=9999; i++) {
                for(int j=0 ; j<=9999; j++) {
                    if( (i+j)*(i+j) == i*10000+j ) {
                        printf("%04d%04d\n", i, j);
                    }
                }
            }
        }

    }

    return 0;
}
