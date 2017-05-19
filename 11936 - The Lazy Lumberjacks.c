#include <stdio.h>

int is_valid_triangle(int a, int b, int c) {
    /*
        Check Triangle validity
        return 1 if triangle is valid
        return 0 if triangle is invalid
    */
    if((a + b > c) && (b + c > a) && (c + a > b)){
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n, a, b, c;
    scanf("%d", &n);

    while(n--) {
        scanf("%d%d%d", &a, &b, &c);
        if(is_valid_triangle(a,b,c)) {
            printf("OK\n");
        } else {
            printf("Wrong!!\n");
        }
    }

    return 0;
}
