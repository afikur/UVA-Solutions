#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int instructionLog[101], testCase, n, instructionNo, position;
    string instruction;

    cin>>testCase;

    while( testCase-- ) {

        for(int i=0; i < 101 ; i++) instructionLog[i] = 0;

        cin>>n;

        position = 0;

        for(int i=1 ; i <= n; i++) {

            cin>>instruction;

            if(instruction == "LEFT") {
                instructionLog[i] = -1;
                position -= 1;
            }
            else if (instruction == "RIGHT") {
                instructionLog[i] = 1;
                position += 1;
            }
            else {
                scanf("%*s %d", &instructionNo);

                instructionLog[i] = instructionLog[instructionNo];
                position += instructionLog[instructionNo];
            }
        }

        cout<<position<<endl;
    }

    return 0;
}
