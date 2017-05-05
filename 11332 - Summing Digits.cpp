/* Afikur Rahman (afikur) */
#include <iostream>
using namespace std;

int main() {
    int n, sum;

    while(cin >> n && n != 0) {
        sum = 0;

        while(n) {
            sum = sum + (n % 10);
            n /= 10;

            if(n == 0 && sum >= 10) {
                n = sum;
                sum = 0;
            }
        }

        cout << sum << endl;
    }
    return 0;
}
