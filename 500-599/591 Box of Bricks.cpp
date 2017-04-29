/*
    Afikur Rahman (afikur)
    UVA 591
    Date: 08.02.17
*/

#include <iostream>

using namespace std;

int main()
{
    int *brick, n, sum, avg, moves, sets=0;

    while(cin>>n) {
        if(n == 0) break;

        brick = new int[n];
        moves = 0;
        sum = 0;

        for(int i=0; i<n; i++) {
            cin>>brick[i];
            sum += brick[i];
        }

        avg = sum / n;

        for(int i=0; i<n; i++) {
            if(brick[i] > avg) moves += brick[i] - avg;
        }

        cout << "Set #" << ++sets << endl;
        cout<<"The minimum number of moves is " << moves << "." << endl << endl;

        delete [] brick;

    }

    return 0;
}
