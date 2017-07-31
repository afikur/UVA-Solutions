#include <iostream>
#include <string>
using namespace std;

int main() {
    int n1, n2;
    string s1[20];
    string s2[20];
    string s3;

    cin >> n1;
    cin.ignore();

    for(int i = 0; i < n1; i++) {
        getline(cin, s1[i]);
        getline(cin, s2[i]);
    }

    cin >> n2;
    cin.ignore();
    for(int i = 0; i < n2; i++) {
        getline(cin, s3);

        for(int j = 0; j < n1; j++) {
            if(s3 == s1[j]) {
                cout << s2[j] << endl;
            }
        }
    }

    return 0;
}
