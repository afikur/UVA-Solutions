/*
    Afikur Rahman (afikur)
    UVA 10783
    Date: 18.02.17
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int testCase, a, b, sum;

    cin>>testCase;

    for(int k = 1 ; k <= testCase ; k++) {
        cin>>a>>b;

        sum = 0;

        for(int i = a ; i <= b ; i++) {
            if(i % 2 !=0) sum += i;
        }

        printf("Case %d: %d\n", k, sum);
    }

    return 0;
}
