/*
    Afikur Rahman (afikur)
    UVA 10018
    Date: 08.02.17
*/

#include <iostream>
using namespace std;

long int reverseNumber(long int n);

bool palindrome(long int n);

int main()
{
    int testCase, counter;
    long int n;

    cin>>testCase;

    while(testCase--) {

        cin>>n;

        counter = 0;

        while(! palindrome(n)) {
            n += reverseNumber(n);
            counter++;
        }

        cout<<counter<<" " <<n<<endl;
    }
    return 0;
}


long int reverseNumber(long int n) {
    long int temp = 0;

    while(n) {
       temp *= 10;
       temp += n % 10;
       n /= 10;
    }

    return temp;
}

bool palindrome(long int n) {
    return n == reverseNumber(n) ? true: false;
}
