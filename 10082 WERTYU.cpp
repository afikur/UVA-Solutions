/*
    Afikur Rahman (afikur)
    UVA 10082
    Date: 09.02.17
*/

#include <iostream>

using namespace std;

int main()
{
    char key[50] = { '`', '1', '2', '3', '4', '5', '6','7','8','9','0','-','=',
                    'Q', 'W', 'E', 'R', 'T', 'Y', 'U','I','O','P','[',']','\\',
                   'A', 'S', 'D', 'F', 'G', 'H', 'J','K','L',';','\'',
                   'Z', 'X', 'C', 'V', 'B', 'N', 'M',',','.','/', '\0'
                    };

    string s;
    int len;

    while(getline(cin, s)) {

        len = s.length();

        for(int i=0; i<len; i++) {
            for(int j=0; j<50; j++) {
                if(s[i] == key[j]) cout<<key[j-1];
            }
            if(s[i] == ' ') cout<<s[i];
        }

        cout<<endl;
    }
    return 0;
}
