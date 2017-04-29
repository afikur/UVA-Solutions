/*
    Afikur Rahman (afikur)
    UVA 11764
    Date: 15.02.17
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int testCase, n, *walls, highJumps, lowJumps;

    cin>>testCase;

    for(int k=1; k <= testCase ; k++) {
        cin>>n;

        walls = new int[n];
        highJumps = 0;
        lowJumps = 0;

        for(int i = 0 ; i < n ; i++) cin>>walls[i];

        for(int i = 0 ; i<n-1 ; i++) {
            if(walls[i] < walls[i+1]) highJumps++;
            else if(walls[i] > walls[i+1]) lowJumps++;
        }

        printf("Case %d: %d %d\n", k, highJumps, lowJumps);

        delete [] walls;
    }

    return 0;

}
