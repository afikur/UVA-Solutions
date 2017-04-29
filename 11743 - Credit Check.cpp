/*
    Afikur Rahman (afikur)
    Date: 30.04.2017
*/
#include <iostream>
using namespace std;

int main() {
    int testCase, num, sum, temp;
    cin >> testCase;

    while(testCase--) {
        sum = 0;
        for(int i = 0 ; i < 4 ; i++) {
            cin >> num; //5181

            sum += num % 10; //1
            num = num / 10; // 518

            temp = num % 10; // 8
            temp = temp * 2; // 16
            sum += temp % 10; // 6
            temp = temp / 10; // 1
            sum += temp;

            num = num / 10; // 51
            sum += num % 10; // 1

            num = num / 10; // 5
            temp = num * 2; // 10

            sum += temp % 10; // 0
            sum += temp / 10; // 1
        }
        if(sum % 10 == 0) {
            cout << "Valid" << endl;
        } else {
            cout << "Invalid" << endl;
        }
    }

    return 0;
}
