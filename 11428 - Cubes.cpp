#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n,N, found;
    while(cin >> N) {
        if(N == 0) break;
        found = 0;
        for(int i=1; i<=N; i++) {
            for(int j=1; j<=N; j++) {
                if(i*i*i - j*j*j == N) {
                    cout << i << " " << j << endl;
                    found = 1;
                    break;
                }
            }
            if(found) break;
        }
        if(!found) cout << "No solution" << endl;
    }
    return 0;
}
