#include <iostream>

using namespace std;

int abs (int n) {
    if(n < 0) return n*(-1);
    return n;
}

int main()
{
    int testCase, n;

    cin>>testCase;

    while(testCase--) {
        cin>>n;

        n = (n * 567 / 9 + 7492 ) * 235  / 47 - 498;
        n /= 10;
        n %= 10;
        cout<<abs(n)<<endl;
    }

    return 0;
}
