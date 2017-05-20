#include <stdio.h>

int is_triangle(long long int a, long long int b, long long int c) {
    if((a + b > c) && (b + c > a) && (c + a > b)) {
        return 1;
    }
    return 0;
}

int is_equilateral(int a, int b, int c) {
    if(a == b && b == c) {
        return 1;
    }
    return 0;
}

int is_isosceles(int a, int b, int c) {
    if((a == b) || (b == c) || (c == a)) {
        return 1;
    }
    return 0;
}

int main() {
    int T, a, b, c, i;
    scanf("%d", &T);

    for(i = 1; i <= T; i++) {
        scanf("%d%d%d", &a, &b, &c);
        if(is_triangle(a,b,c)) {
            if(is_equilateral(a, b, c)) {
                printf("Case %d: Equilateral\n", i);
            }
            else if(is_isosceles(a, b, c)) {
                printf("Case %d: Isosceles\n", i);
            }
            else {
                printf("Case %d: Scalene\n", i);
            }
        }
        else {
            printf("Case %d: Invalid\n", i);
        }
    }

    return 0;
}
