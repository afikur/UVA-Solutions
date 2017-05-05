#include <iostream>
using namespace std;

int GCD(int i, int j) {
    int rem, temp;

    if(i > j) {
        temp = i;
        i = j;
        j = temp;
    }

    rem = j % i;

    while(rem != 0) {
        temp = i;
        i = rem;
        j = temp;

        rem = j % i;
    }
    return i;
}

int main() {
    int  N, i, j, G;
    while(cin>>N) {
        if(N == 0) break;

        G=0;
        for(i=1;i<N;i++) {
            for(j=i+1;j<=N;j++)
            {
                G+=GCD(i,j);
            }
        }

        cout << G << endl;
    }
    return 0;
}
