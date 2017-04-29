/*
    Afikur Rahman (afikur)
    UVA 11777
    Date: 15.02.17
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int testCase, term1, term2, finale, attendence, test1, test2, test3, sum;
    char grade;
    cin>>testCase;

    for(int k = 1 ; k <= testCase ; k++) {
        cin>>term1>>term2>>finale>>attendence>>test1>>test2>>test3;

        if(test1 < test2) swap(test1, test2);
        if(test2 < test3) swap (test2, test3);

        sum = term1 + term2 + finale + attendence + ( (test1 + test2) / 2 );

        if(sum >= 90) grade = 'A';
        else if(sum >= 80 && sum < 90) grade = 'B';
        else if(sum >= 70 && sum < 80) grade = 'C';
        else if(sum >= 60 && sum < 70) grade = 'D';
        else if(sum < 60) grade = 'F';

        printf("Case %d: %c\n", k, grade);
    }

    return 0;
}
