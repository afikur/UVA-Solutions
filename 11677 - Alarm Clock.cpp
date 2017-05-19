#include <iostream>
using namespace std;

int main() {
    int h1, m1, h2, m2, sleep;
    while(cin >> h1 >> m1 >> h2 >> m2) {
        if(!h1 && !m1 && !h2 && !m2) break;

        if(h1 == 0) h1 = 24;
        if(h2 == 0) h2 = 24;

        sleep = ((h2 * 60 + m2) - (h1 * 60 + m1));
        if(sleep < 0) {
            sleep = 24 * 60 + sleep;
        }

        cout << sleep << endl;
    }
    return 0;
}
