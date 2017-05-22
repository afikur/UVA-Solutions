#include <stdio.h>

int collatz_term(long long int A, int L) {
    int counter = 1;
    while(A != 1) {
        if(A % 2 == 0) {
            A = A / 2;
        } else {
            A = 3 * A + 1;
            if(A > L) break;
        }
        counter++;
    }
    return counter;
}

int main() {
    int A, L, case_no = 1;
    while(scanf("%d%d", &A, &L) == 2) {
        if(A < 0 && L < 0) break;

        printf("Case %d: A = %d, limit = %d, number of terms = %d\n", case_no++, A, L, collatz_term(A, L));
    }
    return 0;
}
