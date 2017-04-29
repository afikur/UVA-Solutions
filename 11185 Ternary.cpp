/*
    Afikur Rahman (afikur)
    UVA 11185
    Date: 24.02.17
*/

#include <iostream>

using namespace std;

int main()
{
    long long int n, rem, ternary, zeros;

    while(cin>>n) {
        if(n < 0) break;

        ternary = 0;
        zeros = 0;

        if(n == 0) cout<<n<<endl;

        else {
            while(n) {
                rem = n % 3;

                ternary = ternary * 10 + rem;

                if(ternary == 0) zeros++;

                n /= 3;
            }

            while(ternary) {
                cout<<ternary % 10;
                ternary /= 10;
            }

            while(zeros--) {
                cout<<"0";
            }

            cout<<endl;
        }
    }

    return 0;
}
