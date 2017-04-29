/*
    Afikur Rahman (afikur)
    UVA 10222
    Date: 27.02.17
*/

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
    string s;
    char key[50] = { '`', '1', '2', '3', '4', '5', '6','7','8','9','0','-','=',
                    'q', 'w', 'e', 'r', 't', 'y', 'u','i','o','p','[',']','\\',
                   'a', 's', 'd', 'f', 'g', 'h', 'j','k','l',';','\'',
                   'z', 'x', 'c', 'v', 'b', 'n', 'm',',','.','/', '\0'
                    };
    getline(cin,s);

    int len = s.length();

    for(int i=0; i<len ; i++) {
        for(int j=0; key[j]!='\0'; j++) {

            if(s[i] == ' ') {
                cout<<" ";
                break;
            }
            if(s[i] >= 65 && s[i] <= 90) {
                if((s[i] - 'A' + 'a') == key[j]) cout<<key[j-2];
            }
            else if(s[i] == key[j]) cout<<key[j-2];
        }
    }

    cout<<endl;


    return 0;
}
