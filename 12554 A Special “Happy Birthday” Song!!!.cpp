/*
    Afikur Rahman (afikur)
    UVA 12554
    Date: 10.02.17
*/

#include <iostream>

using namespace std;

int main()
{
    int n, i, j;

    cin>>n;

    string person[n];

    const string song[16] = {"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"};

    for(i=0; i<n; i++) {
        cin>>person[i];
    }

    if(n <= 16) {
        for(i=0, j=0; i < 16; i++, j++) {
            cout << person[j] << ": " << song[i] << endl;

            if( j == (n-1) ) j = -1;
        }
    } else {

        for(i=0, j=0; i < n ; i++, j++) {
            cout << person[i] << ": " << song[j] << endl;

            if( j == 15 ) j = -1;
        }

        i = 0;
        while(j<16) {
            cout << person[i++] << ": " << song[j++] << endl;
        }
    }

    return 0;
}
