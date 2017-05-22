#include <stdio.h>

int main() {
    int x;

    while(scanf("%d", &x) == 1) {
        long long int sum = x / 2.0 * (x + 1);
        printf("%lld\n", sum * sum);
    }

    return 0;
}
