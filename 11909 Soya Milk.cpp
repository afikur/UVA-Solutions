#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

#define PI acos(-1)

double deg(int d) {
    return d * PI / 180;
}

int main() {
    int l,w,h,d;
    double x, tri, rect;

    while(cin >> l >> w >> h >> d) {
        x = l * tan(deg(d));

        if(x < h) {
            rect = l * w * h;
            tri = l * x * w / 2;
            printf("%.3lf mL\n", rect - tri);
        } else {
            d = 90 - d;
            x = h * tan(deg(d));
            tri = x * h * w / 2;
            printf("%.3lf mL\n", tri);
        }
    }
    return 0;
}
