/*
    Afikur Rahman (afikur)
    Date: 07-07-2017
*/
#include <stdio.h>

int Mod(b, p, m) {
    int y;
    if(p == 0) return 1;
    else if(p % 2 == 0) {
        y = Mod(b, p/2, m);
        return (y * y) % m;
    }
    else {
        return ((b % m) * Mod(b, p-1, m)) % m;
    }
}

int main() {
    int b, p, m;
    while(scanf("%d%d%d", &b, &p, &m) == 3) {
        printf("%d\n", Mod(b, p, m));
    }
    return 0;
}
