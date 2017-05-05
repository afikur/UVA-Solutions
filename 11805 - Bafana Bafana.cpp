/*Afikur Rahman (afikur) */

#include <cstdio>

int main() {
    int T, N, K, P;
    scanf("%d", &T);

    for(int i = 1; i <= T ; i++) {
        scanf("%d%d%d", &N, &K, &P);

        if(N == P) {
            printf("Case %d: %d\n", i, K);
        }
        else if (N >= (K + P)) {
            printf("Case %d: %d\n", i, K+P);
        }

        else if((K+P) % N == 0) {
            printf("Case %d: %d\n", i, N);
        }

        else if(N < (K+P)) {
            printf("Case %d: %d\n", i, (K+P)%N);
        }
    }

    return 0;
}
