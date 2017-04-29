/*
    Afikur Rahman (afikur)
    UVA 299
    Date: 07.02.17
*/
#include <iostream>
#include <algorithm>

using namespace std;



int main()
{
    int N, L, counter;

    cin>>N;

    while(N--) {

        cin>>L;

        int a[L];

        for(int i = 0 ; i < L ; i++) cin>>a[i];

        counter = 0;

        for(int i=0; i < L-1 ; i++) {
            for(int j=i+1; j < L; j++) {
                if(a[i] > a[j]) {
                    swap(a[i], a[j]);
                    counter++;
                }
            }
        }

        cout<<"Optimal train swapping takes "<<counter<<" swaps."<<endl;
    }

    return 0;
}
