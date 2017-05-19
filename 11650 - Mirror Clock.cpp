#include <stdio.h>

int abs(int a) {
    if(a < 0) {
        return (-1)*a;
    }
    return a;
}

int main() {
    int t, h, m, diff;
    scanf("%d", &t);
    while(t--) {
        scanf("%d:%d", &h, &m);
        if(h == 12) {
            h = 0;
        }

        diff = abs(720 - (h * 60 + m));

        if(diff == 0) {
            printf("%02d:%02d\n", h, m);
        }
        else {
            h = diff / 60;
            if(h == 0) {
                h = 12;
            }
            m = diff % 60;
            printf("%02d:%02d\n", h, m);
        }
    }
    return 0;
}
