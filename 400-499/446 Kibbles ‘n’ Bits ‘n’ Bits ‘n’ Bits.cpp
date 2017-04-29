/*
    Afikur Rahman (afikur)
    UVA 401
    Date: 08.02.17
*/

#include <iostream>
#include <cstdio>

using namespace std;

double intToBin(int n) {
    int bin[15], i=0, rem;
    double binary = 0;

    while(n) {
        rem = n % 2;
        bin[i++] = rem;
        n /= 2;
    }

    for(i=i-1; i>=0; i--) {
        binary = binary*10 + bin[i];
    }

    return binary;

}

int main()
{
    int n, hex1, hex2, result;
    char ch;

    cin>>n;

    while(n--) {
        cin>>hex>>hex1>>ch>>hex>>hex2;

        if(ch == '-') result = hex1 - hex2;
        else if(ch == '+') result = hex1 + hex2;

        printf("%013.0lf %c %013.0lf = %d\n", intToBin(hex1), ch, intToBin(hex2), result);
    }

    return 0;
}
