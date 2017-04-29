/*
    Afikur Rahman (afikur)
    UVA 488
    Date: 08.02.17
*/
#include <iostream>

using namespace std;

void webFormGenerator(int amplitude) {
    for(int i=1; i<=amplitude; i++) {
        for(int j=1; j<=i; j++) {
            cout<<i;
        }
        cout<<endl;
    }
    for(int i=amplitude-1; i>=1; i--) {
        for(int j=1; j<=i; j++) {
            cout<<i;
        }
        cout<<endl;
    }
}

int main()
{
    int testCase, amplitude, frequency;
    bool firstLine = true;

    cin>>testCase;

    while(testCase--) {

        cin>>amplitude>>frequency;

        for(int i=0; i<frequency; i++) {
            if(! firstLine) cout<<endl;
            firstLine = false;

            webFormGenerator(amplitude);

        }
    }

    return 0;
}
