/*
    NOT SOLVED YET
    large input ---
    take char type input
*/
#include <iostream>

using namespace std;

bool leapYear(int n) {
    return ( (n % 4 == 0 && n % 100 != 0) || (n % 400 == 0) ) ? true : false;
}

bool huluculu(int n) {
    return n % 15 == 0 ? true : false;
}

bool bulukulu(int n) {
    return n % 55 == 0 ? true : false;
}

int main()
{
    int n;
    bool firstLine = true;

    while(cin>>n) {

        if(! firstLine) cout<<endl;
        firstLine = false;


        if( leapYear(n) && huluculu(n) ) cout << "This is leap year." << endl << "This is huluculu festival year."<<endl;
        else if( leapYear(n) && bulukulu(n) ) cout << "This is leap year." << endl << "This is bulukulu festival year."<<endl;
        else if( leapYear(n) ) cout << "This is leap year." <<endl;
        else if( huluculu(n) ) cout<< "This is huluculu festival year." << endl;
        else if( bulukulu(n) ) cout<< "This is bulukulu festival year." << endl;
        else cout<<"This is an ordinary year."<<endl;
    }

    return 0;

}
