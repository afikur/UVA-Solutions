/*
    Afikur Rahman (afikur)
    UVA 12531
    Date: 10.02.17
*/

#include <cstdio>

int main() {
    int deg;
    while(scanf("%d", &deg) == 1) {
        deg % 6 == 0 ? printf("Y\n") : printf("N\n");
    }
    return 0;
}
