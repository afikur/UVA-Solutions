/*
    Afikur Rahman (afikur)
    UVA 10035
    Date: 09.02.17
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    unsigned int a, b, remA, remB, counter;
    int carry;

    while(cin>>a>>b) {
        if(!a && !b) break;

        if(a < b) swap(a,b);

        counter = 0;
        carry = false;

        while(a) {
            remA = a % 10;
            a = a / 10;

            remB = b % 10;
            b /= 10;

            if((remA + remB + carry) > 9) {
                carry = 1;
                counter++;
            } else { carry = 0; }
        }

        if(! counter) cout<<"No carry operation."<<endl;
        else if(counter == 1) cout << "1 carry operation." << endl;
        else cout<<counter<<" carry operations."<<endl;
    }

    return 0;
}
