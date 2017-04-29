/*
    Afikur Rahman (afikur)
    UVA 12372
    Date: 11.02.17
*/

#include <iostream>

using namespace std;

int main()
{
    int testCase, l, w, h;

    cin>>testCase;

    for(int i=1 ; i <= testCase; i++) {
        cin >> l >> w >> h;

        if( l > 20 || w > 20 || h > 20) cout<<"Case "<<i<<": "<<"bad"<<endl;
        else cout<<"Case "<<i<<": "<<"good"<<endl;
    }

    return 0;
}
