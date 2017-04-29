/*
    Afikur Rahman (afikur)
    UVA 11934
    Date: 20.02.17
*/

#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,L, counter;

    while(cin>>a>>b>>c>>d>>L) {
        if(!a && !b && !c && !d && !L) break;

        counter = 0;

        for(int i=0; i<=L; i++) {
            if((a*i*i + b*i + c) % d == 0) counter++;
        }

        cout<<counter<<endl;
    }

    return 0;
}
