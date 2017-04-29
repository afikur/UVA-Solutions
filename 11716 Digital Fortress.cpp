/*
    Afikur Rahman (afikur)
    UVA 11716
    Date: 17.02.16
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int testCase, len, k;
    string s;

    cin>>testCase;
    cin.ignore();

    while(testCase--) {
        getline(cin, s);

        len = sqrt(s.length());

        // checking the string is square or not
        if(pow(len,2) != s.length()) {
            cout << "INVALID" << endl;
        }
        // executes else only when the array is square
        else {
            char decrypt[len][len];

            k = 0;

            //storing the one dimensional string into two dimensional square array

            for(int i=0; i<len; i++) {
                for(int j=0; j<len ; j++) {
                    decrypt[i][j] = s[k++];
                }
            }

            //output the array

            for(int i=0; i<len; i++) {
                for(int j=0; j<len ; j++) {
                    cout << decrypt[j][i];
                }
            }

            cout<<endl;
        }
    }

    return 0;
}
