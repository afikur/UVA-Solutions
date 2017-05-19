#include <stdio.h>

double absolute(double n) {
    if(n < 0) return (-1)*n;
    return n;
}

int main() {
    int h, m;
    double angle_h, angle_m, angle;

    while(scanf("%d:%d", &h, &m) == 2) {
        if(!h && !m) break;

        angle_h = (h * 30) + ((m/60.0) * 30);
        angle_m = m * 6;

        angle = absolute(angle_h - angle_m);
        angle = angle > 180 ? 360 - angle : angle;

        printf("%.3lf\n", angle);
    }
    return 0;
}
