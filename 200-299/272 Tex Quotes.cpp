/*
    Afikur Rahman (afikur)
    UVA 272
    Date: 07.02.17
*/

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int len, counter = 0;
    bool line = false;

    string s;
    while(getline(cin,s)) {

        len = s.length();

        for(int i=0; i<len; i++) {

            if(s[i] == '"') {
                counter++;

                if(counter % 2 !=0) cout<<"``";
                else cout<<"''";

            } else {
                cout<<s[i];
            }
        }

        cout<<endl;
    }

    return 0;
}
