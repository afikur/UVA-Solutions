#include <iostream>
using namespace std;

int main() {
    int N, e, f, c, bottle, soda, rem;
    cin>>N;

    while(N--) {
        cin >> e >> f >> c;
        bottle = e + f;

        soda = 0;
        while(bottle >= c) {
            rem = bottle % c;
            bottle /= c;
            soda += bottle;
            bottle += rem;
        }
        cout << soda << endl;
    }
    return 0;
}
