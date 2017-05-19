#include <iostream>
#include <string>
using namespace std;

bool same_string(string & first, string & second) {
    int len1 = first.length();
    int len2 = second.length();
    if(len1 != len2)
        return false;
    else if(first == second)
        return true;
    else {
        for(int i=0; i<len1; i++) {
            if((first[i] == 'a' || first[i] == 'e' || first[i] == 'i' || first[i] == 'o' || first[i] == 'u') &&
               (second[i] == 'a' || second[i] == 'e' || second[i] == 'i' || second[i] == 'o' || second[i] == 'u') ) {
            }
            else if(first[i] != second[i]){
                return false;
            }
        }

        return true;
    }
}

int main() {
    string first, second;
    int n;
    cin>>n;
    while(n--) {
        cin >> first >> second;

        if(same_string(first, second)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
