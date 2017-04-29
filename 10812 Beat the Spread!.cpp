/*
    Afikur Rahman (afikur)
    UVA 10812
    Date: 20.02.17
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int tc,x,y,t1,t2;
    cin>>tc;

    while(tc--) {
        cin>>x>>y;

        if(x < y) cout<<"impossible"<<endl;
        else if(y == 0) cout<<x<<" "<<y<<endl;

        else {
            t1 = (x + y) / 2;
            t2 = x - t1;



            if(abs(t1-t2) != y) cout<<"impossible"<<endl;
            else cout<<t1<<" "<<t2<<endl;
        }
    }

    return 0;
}
