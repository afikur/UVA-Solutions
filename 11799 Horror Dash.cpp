#include <iostream>
#include <cstdio>

using namespace std;

int maximum(int *a, int n) {
    int max_val = a[0];
    for(int i=1; i<n; i++) {
        if(max_val < a[i]) {
            max_val = a[i];
        }
    }

    return max_val;
}

int main()
{
    int testCase, n, *a;

    cin>>testCase;

    for(int i = 1; i <= testCase; i++) {
        cin>>n;
        a = new int[n];
        for(int j = 0; j < n; j++) {
            cin>>a[j];
        }

        printf("Case %d: %d\n", i, maximum(a,n));
    }

    return 0;
}
