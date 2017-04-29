#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int h1Start, h1End,
        h2Start, h2End,
        m1Start, m1End,
        m2Start, m2End,
        testCase,
        wifeHourStart, wifeHourEnd,
        meetingHourStart, meetingHourEnd;

    int counter = 0;

    cin>>testCase;

    while(testCase--) {
        scanf("%d:%d %d:%d", &h1Start, &m1Start, &h1End, &m1End);
        scanf("%d:%d %d:%d", &h2Start, &m2Start, &h2End, &m2End);

        wifeHourStart = h1Start * 60 + m1Start;
        wifeHourEnd = h1End * 60 + m1End;

        meetingHourStart = h2Start * 60 + m2Start;
        meetingHourEnd = h2End * 60 + m2End;

        if(meetingHourEnd < wifeHourStart || wifeHourEnd < meetingHourStart) {
            printf("Case %d: Hits Meeting\n", ++counter);
        }

        else {
            printf("Case %d: Mrs Meeting\n", ++counter);
        }

    }

    return 0;
}
