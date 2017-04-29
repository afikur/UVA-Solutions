/*
    Afikur Rahman (afikur)
    UVA 10370
    Date: 09.02.17
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int testCase, n, *a, counter;
    double sum, avg;

    cin>>testCase;

    while(testCase--) {

        cin>>n;

        a = new int[n];
        sum = 0;
        counter = 0;

        for(int i = 0 ; i < n ; i++) {
            cin>>a[i];
            sum += a[i];
        }

        avg = sum / n;

        for(int i = 0 ; i < n ; i++) {
            if(a[i] > avg) counter++;
        }

        printf("%.3lf%\n", ((double) counter / n) * 100);

        delete [] a;
    }

    return 0;
}
