/* Afikur Rahman (afikur)*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int i, n, counter = 0;

    while(cin >> n) {
        if(n < 0) break;
        i = 0;
        while(pow(2,i) < n) {
            i++;
        }
        cout << "Case " << ++counter << ": " << i << endl;
    }

    return 0;
}
