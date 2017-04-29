/*
    Afikur Rahman (afikur)
    UVA 12403
    Date: 11.02.17
*/

#include <iostream>

using namespace std;

int main()
{
    int testCase, donation, account = 0;
    string s;

    cin>>testCase;

    while(testCase--) {
        cin >> s;

        if(s == "report") {
            cout<<account<<endl;
        } else {
            cin>>donation;
            account += donation;
        }
    }
    return 0;
}
