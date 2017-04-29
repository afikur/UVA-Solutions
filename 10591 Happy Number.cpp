/*
    Afikur Rahman (afikur)
    UVA 10591
    Date: 21.02.17
*/

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    long long int testCase, n, a, result;

    cin>>testCase;

    for(int k = 1 ; k <= testCase ; k++) {
        cin>>a;

        n = a;
        result = 0;

        while(1) {
            while(n) {
                result += pow(n % 10, 2);
                n /= 10;
            }

            if(result < 10) break;
            n = result;
            result = 0;
        }
        if(result == 1)
            printf("Case #%d: %d is a Happy number.\n", k, a);
        else
            printf("Case #%d: %d is an Unhappy number.\n", k, a);
    }

    return 0;
}
