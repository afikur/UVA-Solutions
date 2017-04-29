/*
    Afikur Rahman (afikur)
    UVA 11461
    Date: 18.02.17
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,b,counter;

    while(cin>>a>>b) {
        if(!a && !b) break;

        counter = 0;

        for(int i = a ; i <= b ; i++) {
            if (sqrt(i) == (int)sqrt(i)) {
                counter++;
            }
        }

        cout<<counter<<endl;
    }

    return 0;
}
