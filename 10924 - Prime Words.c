#include <stdio.h>

int is_prime(int n) {
    int i, j;
    if(n < 2) return 1;
    else {
        for(i = 2; i < n; i++) {
            if(n % i == 0) {
                return 0;
            }
        }
        return 1;
    }
}

int main() {
    int i, sum;
    char s[20];

    while(scanf("%s", s) == 1) {
        sum = 0;
        for(i = 0; s[i] != '\0'; i++) {
            if(s[i] >= 'a' && s[i] <= 'z') {
                sum += s[i] - 'a' + 1;
            }
            else {
                sum += s[i] - 'A' + 27;
            }
        }

        if(is_prime(sum)) {
            printf("It is a prime word.\n");
        } else {
            printf("It is not a prime word.\n");
        }
    }
    return 0;
}
