#include <stdio.h>

int main() {
    int n, s;
    scanf("%d", &n);

    while(n--) {
        scanf("%d", &s);

        if(s == 1 || s == 4 || s == 78) {
            printf("+\n");
        }
        else if(s == 135 || s == 435 || s == 7835) {
            printf("-\n");
        }
        else if(s == 914 || s == 944 || s == 9784) {
            printf("*\n");
        }
        else if(s == 1901 || s == 1904 || s == 19078) {
            printf("?\n");
        }
        else {
            while(s > 1000) {
                s /= 10;
            }
            if(s == 135 || s == 435 || s == 783) {
                printf("-\n");
            }
            else if(s == 914 || s == 944 || s == 978) {
                printf("*\n");
            }
            else if(s == 190 || s == 190 || s == 190) {
                printf("?\n");
            }
            else {
                printf("+\n");
            }
        }
    }
    return 0;
}
