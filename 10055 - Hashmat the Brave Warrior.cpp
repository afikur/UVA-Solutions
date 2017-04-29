/*
    Afikur Rahman Khan (afikur)

    UVA 10055
    Date: 07.02.17
*/

#include <iostream>

using namespace std;

int main()
{
    long int hashmatSoldier, opponentSoldier, diff;

    while(cin>>hashmatSoldier>>opponentSoldier) {
        if(hashmatSoldier > opponentSoldier) diff = hashmatSoldier - opponentSoldier;
        else diff = opponentSoldier - hashmatSoldier;

        cout<<diff<<endl;
    }
    return 0;
}
