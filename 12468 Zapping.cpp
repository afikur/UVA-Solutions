/*
    Afikur Rahman (afikur)
    UVA 12468
    Date: 11.02.17
*/

#include <iostream>

using namespace std;

int main()
{
    int a, b, distanceOne, distanceTwo;

    while(cin>>a>>b) {
        if(a == -1 && b == -1) break;

        if(a > b) swap(a,b);

        distanceOne = a + (100 - b);
        distanceTwo = b - a;

        distanceOne < distanceTwo ? cout << distanceOne << endl : cout << distanceTwo << endl;
    }

    return 0;
}
