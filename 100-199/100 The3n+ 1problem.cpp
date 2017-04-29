/*
    Afikur Rahman (afikur)
    UVA 100
    Date: 07.02.17
*/
#include <iostream>

using namespace std;

int main()
{
    int num1, num2, a,b;

    while(cin >> num1 >> num2) {

        a = num1;
        b = num2;

        if (a  > b) swap(a,b);

        int counter = 0;
        int maximumCycle = 0;

        for (int i = a ; i <= b ; i++) {
            int j = i;
            while(j != 1) {

                if(j % 2 == 0) {
                    j /= 2;
                    counter++;
                }

                else {
                    j = 3 * j + 1;
                    counter++;
                }
            }

            if(maximumCycle < counter) maximumCycle = counter;

            counter = 0;
        }

        cout<<num1<<" "<<num2<<" "<< maximumCycle + 1<<endl;
    }

    return 0;
}
